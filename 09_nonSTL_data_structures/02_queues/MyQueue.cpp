#include <iostream>
#include <cstdlib>
#include "MyQueue.hpp"
#include "QueueExceptions.hpp"
#include <string>

using namespace std;



// constructor
template <typename T, unsigned int maxQueueLen>
MyQueue<T, maxQueueLen>::MyQueue() {
    queueEnd = -1;
}



// adding and popping from the queue
template <typename T, unsigned int maxQueueLen>
void MyQueue<T, maxQueueLen>::inQueue(T elem) {
    if (queueEnd < static_cast<int>(maxQueueLen) - 1) {
        queueEnd += 1;
        queueMembers[queueEnd] = elem;
    }
    else {
        throw FullQueueException();
    }
}

template <typename T, unsigned int maxQueueLen>
T MyQueue<T, maxQueueLen>::outQueue() {
    // queue is not empty
    if (queueEnd >= 0) {
        T temp = queueMembers[0];
        adjustQueue();
        queueEnd -= 1;
        return temp;
    }
    // queue is empty
    else {
        throw EmptyQueueException();
    }
}


/* this function needs to shift all elements by one after the first
one is removed from the queue */
template <typename T, unsigned int maxQueueLen>
void MyQueue<T, maxQueueLen>::adjustQueue() {
    if (queueEnd >= 1) {
        for (int k = 1; k <= queueEnd; k++) {
            queueMembers[k-1] = queueMembers[k];
        }
    }
    // if there was only one element in the queue, do nothing
    else {}
}



// print queue contents
template <typename T, unsigned int maxQueueLen>
void MyQueue<T, maxQueueLen>::showQueue() {
    if (queueEnd >= 0) {
        cout << endl << endl;
        cout << "Printing content of a queue object: " << endl;
        for (int k = 0; k <= queueEnd; k++) {
            cout << "\tqueue[" << k << "] = " << queueMembers[k] << endl;
        }
        cout << endl;
    }
    else {
        throw EmptyQueueException();
    }
}



// display count of elements
template <typename T, unsigned int maxQueueLen>
unsigned int MyQueue<T, maxQueueLen>::displayCount() {
    if (queueEnd >= 0) {
        cout << "Displaying count of elements: " << queueEnd + 1 << endl;
        return queueEnd + 1;
    }
    else {
        cout << "Queue is empty..." << endl;
        return 0;
    }
}



// class getters and setters
template <typename T, unsigned int maxQueueLen>
T MyQueue<T, maxQueueLen>::getFront() {
    if (queueEnd != -1) {
        return queueMembers[0];
    }
    else {
        throw EmptyQueueException();
    }
}

template <typename T, unsigned int maxQueueLen>
T MyQueue<T, maxQueueLen>::getBack() {
    if (queueEnd != -1) {
        return queueMembers[queueEnd];
    }
    else {
        throw EmptyQueueException();
    }
}



// function to clear the queue
template <typename T, unsigned int maxQueueLen>
void MyQueue<T, maxQueueLen>::clearQueue() {
    if (queueEnd != -1) {
        cout << "Clearing a queue..." << endl;
        for (int k = 0; k <= queueEnd; k++) {
            queueMembers[k] = T();
        }
        queueEnd = -1;
    }
    else {
        throw EmptyQueueException();
    }
}


template class MyQueue<int, 5>;
template class MyQueue<string, 4>;


