//
// Created by eldar.a on 17/01/2020.
//

#ifndef DS_A_QUEUE_H
#define DS_A_QUEUE_H

#include "LinkedList.h"
#include <iostream>

using namespace std;

template <typename T> class Queue {
private:
    LinkedList<T> _list;

public:
    /**
     * Default constructor. Creates an empty queue.
     */
    Queue() : _list() {}

    /**
     * Constructs a queue from a given linked list.
     * @param list The list to create the queue from.
     */
    explicit Queue(LinkedList<T> const& list) : _list(list) {} //TODO review this

    void enqueue(T const& x);

    T const& dequeue();

    bool isEmpty() const { return _list.isEmpty(); }

};

template<typename T>
void Queue<T>::enqueue(T const& x) {
    _list.insert(x);
}

template<typename T>
const T& Queue<T>::dequeue() {
    T const& data = _list.getTail()->getData();
    _list.remove(_list.getTail());
    return data;
}


#endif //DS_A_QUEUE_H