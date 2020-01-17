//
// Created by Hadar on 17-Jan-20.
//

#ifndef DS_A_GRAPH_EDGE_H
#define DS_A_GRAPH_EDGE_H


#include "Graph_Node.h"

//TODO change to pointers perhaps?
class Graph_Edge {
private:
    const Graph_Node & _src;
    const Graph_Node & _dst;

public:
    Graph_Edge(const Graph_Node& src, const Graph_Node& dst): _src(src), _dst(dst) {}


    //TODO delete destructor
    ~Graph_Edge() {cout << "graph edge connecting nodes " << _src.Get_key() << " and " << _dst.Get_key() << " deleted"
    << endl;}

    const Graph_Node& getSrc() const
    {
        return _src;
    }
    
    const Graph_Node& getDst() const
    {
        return _dst;
    }
};


#endif //DS_A_GRAPH_EDGE_H