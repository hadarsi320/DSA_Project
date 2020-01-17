#include <iostream>

#include "Graph_Edge.h"
#include "Graph_Node.h"
#include "Queue.h"

int main()
{
    Graph_Node g1(1), g2(2), g3(3), g4(4);
    Queue<Graph_Node> queue;
    queue.enqueue(g1);
    queue.enqueue(g2);
    queue.enqueue(g3);
    queue.enqueue(g4);
    while(!queue.isEmpty())
        cout << queue.dequeue().Get_key() << endl;
}
