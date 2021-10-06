# Wukong+G for Linked Data

Wukong+G is a fast and distributed rdf query processing system that leverages efficient GPU-acelerated graph exploration to proivde highly concurrent and low-latency query processing over big linked data.


## Feature Highlights

* High-performance and scalable in-memory graph store
* Fast and concurrent SPARQL query processing by graph exloration
* Fast communication by leveraging RDMA feature of InfiniBand network
* A GPU extension of query engine for heterogenous (CPU/GPU) cluster
* A type-centric SPARQL query plan optimizer

For more details see [Wukong Project](http://ipads.se.sjtu.edu.cn/projects/wukong), including new features, roadmap, instructions, etc.


## Getting Started

* [Installation](docs/notes/INSTALL.md)
* [Tutorials](docs/notes/TUTORIALS.md)
* [Manual](docs/notes/COMMANDS.md)
* [GPU extension](docs/notes/GPU.md)
* [Q&A](docs/notes/QA.md)


## License

Wukong+G is released under the [Apache 2.0 license](http://www.apache.org/licenses/LICENSE-2.0.html).

If you use Wukong+G in your research, please cite our paper:

    @inproceedings{wang2018fast,
     title={Fast and concurrent $\{$RDF$\}$ queries using RDMA-assisted $\{$GPU$\}$ graph exploration},
     author={Wang, Siyuan and Lou, Chang and Chen, Rong and Chen, Haibo},
     booktitle={2018 $\{$USENIX$\}$ Annual Technical Conference ($\{$USENIX$\}$$\{$ATC$\}$ 18)},
     pages={651--664},
     year={2018}
    }


## Academic and Reference Papers 

[**USENIX ATC**] [Fast and Concurrent RDF Queries using RDMA-assisted GPU Graph Exploration](docs/papers/wukong+g-atc18.pdf). Siyuan Wang, Chang Lou, Rong Chen, and Haibo Chen. Proceedings of 2018 USENIX Annual Technical Conference, Boston, MA, US, July 2018.



