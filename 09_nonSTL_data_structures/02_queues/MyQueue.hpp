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

    private:
        int queueEnd;
        T queueMembers[maxQueueLen];
        void adjustQueue();
};

#endif // MYQUEUE_HPP
