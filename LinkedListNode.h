//
// Created by eldar.a on 17/01/2020.
//

#ifndef DS_A_LINKEDLISTNODE_H
#define DS_A_LINKEDLISTNODE_H

#include <cstddef>
#include <iostream>

using namespace std;

template <typename T> class LinkedListNode {
private:
    T _data;
    LinkedListNode<T> * _next;
    LinkedListNode<T> * _prev;

public:
    explicit LinkedListNode(T const& data, LinkedListNode<T> * next=NULL, LinkedListNode<T> * prev=NULL) :
            _data(data), _next(next), _prev(next) {}

    ~LinkedListNode() {cout << "removing list node" << endl;}

    T const& getData() const { //TODO reference?
        return _data;
    }

    LinkedListNode<T> * getNext() const {
        return _next;
    }

    LinkedListNode<T> * getPrev() const {
        return _prev;
    }

    void setNext(LinkedListNode<T> *next) {
        _next = next;
    }

    void setPrev(LinkedListNode<T> *prev) {
        _prev = prev;
    }

    void print() const;
};


template<typename T>
void LinkedListNode<T>::print() const {
    cout << "Node's data: " << _data << endl;
}

#endif //DS_A_LINKEDLISTNODE_H
