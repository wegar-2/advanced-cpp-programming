#ifndef MYQUEUE_HPP
#define MYQUEUE_HPP
#include "QueueExceptions.hpp"

#include <string>

template <typename T, unsigned int maxQueueLen>
class MyQueue {
    public:
        MyQueue();
        void inQueue(T elem);
        T outQueue();
        void showQueue();
        T getQueueMember();
        unsigned int displayCount();
        T getFront();
        T getBack();
        void clearQueue();

    private:
        int queueEnd;
        T queueMembers[maxQueueLen];
        void adjustQueue();
        bool isEmpty();
};

#endif // MYQUEUE_HPP
