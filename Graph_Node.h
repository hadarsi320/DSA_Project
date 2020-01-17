//
// Created by Hadar on 17-Jan-20.
//

#ifndef DS_A_GRAPH_NODE_H
#define DS_A_GRAPH_NODE_H


#include "LinkedList.h"

class Graph_Node {
private:
    LinkedList<Graph_Node> _inAdjacencyList;
    LinkedList<Graph_Node> _outAdjacencyList;
    unsigned _key;

public:
    Graph_Node(unsigned key): _key(key) {}

    //TODO delete destructor
    ~Graph_Node() { cout << "Graph node " << _key << " deleted" << endl; }

    unsigned Get_out_Degree() const
    {
        return _outAdjacencyList.length();
    }

    unsigned Get_in_Degree() const
    {
        return _inAdjacencyList.length();
    }

    unsigned Get_key() const
    {
        return _key;
    }

    void addInNeighbour(const Graph_Node &inAdjacent)
    {
        _inAdjacencyList.insert(inAdjacent);
    }

    void addOutNeighbour(const Graph_Node &outAdjacent)
    {
        _outAdjacencyList.insert(outAdjacent);
    }
};


#endif //DS_A_GRAPH_NODE_H
