//
// Created by eldar.a on 17/01/2020.
//

#ifndef DS_A_LINKEDLIST_H
#define DS_A_LINKEDLIST_H

#include <cstddef>
#include <iostream>
#include "LinkedListNode.h"

using namespace std;


template <typename T> class LinkedList {
private:
    LinkedListNode<T> * _head;
    LinkedListNode<T> * _tail;

public:
    /**
     * Default constructor. Creates an empty linked list with head pointing to NULL.
     */
    LinkedList() : _head(NULL), _tail(NULL) {}

    /**
     * Destructor. Deletes ALL nodes in list.
     */
    ~LinkedList();

    /**
     * Returns the head of the list.
     * @return _head The head of the list.
     */
    LinkedListNode<T> * getHead() const { return _head; }

    /**
     * Returns the tail of the list.
     * @return _tail The tail of the list.
     */
    LinkedListNode<T> * getTail() const { return _tail; }

    /**
     * Returns true If the list is empty, false otherwise.
     * @return true If the list is empty, false otherwise.
     */
    bool isEmpty() const { return _head == NULL; }

    /**
     * Inserts a new node to the head of the list.
     * @param node The node to insert.
     * @return The new head of the list.
     */
    void insert(const T &x);

    void remove(LinkedListNode<T> * x);

    void printList() const;

    /**
     * Returns the number of elements in the list.
     * @return n The number of elements in the list.
     */
    size_t length() const;
};

template <typename T>
void LinkedList<T>::insert(const T &x) { // we assume that x._next and x._prev are NULL
    // if list is empty we set both head and tail to be the node
    auto *nodePtr = new LinkedListNode<T>(x);
    if (isEmpty()) {
        _head = nodePtr;
        _tail = nodePtr;
    }
    else { // list is not empty, push node to be the new head.
        nodePtr->setNext(_head);
        _head->setPrev(nodePtr);
        _head = nodePtr;
    }
}

template<typename T>
LinkedList<T>::~LinkedList() {
    LinkedListNode<T> * ptr = _head;
    LinkedListNode<T> * next;
    while (ptr != NULL) {
        next = ptr->getNext();
        delete ptr;
        ptr = next;
    }
    cout << "Deleting list..." << endl;
}

template<typename T>
void LinkedList<T>::printList() const {
    LinkedListNode<T> *ptr = _head;
    while (ptr != NULL) {
        ptr->print();
        ptr = ptr->getNext();
    }
}

template<typename T>
size_t LinkedList<T>::length() const {
    size_t len = 0;
    LinkedListNode<T> *ptr = _head;
    while (ptr != NULL) {
        len += 1;
        ptr = ptr->getNext();
    }
    return len;
}

template<typename T>
void LinkedList<T>::remove(LinkedListNode<T> *x) {
    if (x->getPrev() != NULL)
        (x->getPrev())->setNext((x->getNext()));
    if (x->getNext() != NULL)
        (x->getNext())->setPrev((x->getPrev()));
    x->setNext(NULL);
    x->setNext(NULL);
    cout << "Removing node..." << endl;
}

#endif //DSA_PROJECT_LINKEDLIST_H
