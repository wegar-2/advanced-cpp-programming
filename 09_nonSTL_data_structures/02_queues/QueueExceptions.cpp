#include "QueueExceptions.hpp"
#include <exception>



const char* BehindQueueEndException::what() {
    return "An attempt to access element behind the end of the queue!";
}



const char* FullQueueException::what() {
    return "No more elements can be added!";
}



const char* EmptyQueueException::what() {
    return "The queue is empty! ";
}
