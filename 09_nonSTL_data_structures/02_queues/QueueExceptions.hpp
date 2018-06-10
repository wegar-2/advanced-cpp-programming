/*
CONTENTS:
This script contains exceptions that are used in the
implementation of the MyQueue class.
*/



/* 1. attempt to access element that is behind the end of the queue */

#ifndef BEHINDQUEUEENDEXCEPTION_HPP
#define BEHINDQUEUEENDEXCEPTION_HPP

#include <exception>

/*
    MyQueue method when
    This class is an exception that is thrown by
*/

class BehindQueueEndException : public std::exception {
    public:
        const char* what();
};

#endif // BEHINDQUEUEENDEXCEPTION_HPP



/* 2. queue object is already full error */

#ifndef FULLQUEUEEXCEPTION_HPP
#define FULLQUEUEEXCEPTION_HPP

class FullQueueException : public std::exception {
    public:
        const char* what();
};

#endif // FULLQUEUE_HPP



/* 3. queue is empty - there is no element to get out of it */

#ifndef EMPTYQUEUEEXCEPTION_HPP
#define EMPTYQUEUEEXCEPTION_HPP

class EmptyQueueException {
    public:
        const char* what();
};

#endif // EMPTYQUEUE_HPP
