#pragma once 

#include "request.h"
#include "network_node.h"
#include "profile.h"
#include "thread_cfg.h"

#define USE_RBF 0


void SendReq(thread_cfg* cfg,int r_mid,int r_tid,request& r,profile* profile_ptr=NULL){
    std::stringstream ss;
    boost::archive::text_oarchive oa(ss);
    oa << r;
    if(profile_ptr!=NULL){
      profile_ptr->record(ss.str().size());
    }
    std::string str=ss.str();

#if USE_RBF
    cfg->rdma->rbfSend(cfg->t_id,r_mid, r_tid, str);    
#else 
    cfg->node->Send(r_mid,r_tid,ss.str());
#endif
}

request RecvReq(thread_cfg* cfg){

#if USE_RBF
    std::string str=cfg->rdma->rbfRecv(cfg->t_id);
#else 
    std::string str=cfg->node->Recv();
#endif


    std::stringstream s;
    s << str;
    boost::archive::text_iarchive ia(s);
    request r;
    ia >> r;
    return r;
}