#ifndef MYOTHEREXCEPTION_HPP
#define MYOTHEREXCEPTION_HPP

#include <exception>

class MyOtherException : public std::exception {
public:
    const char* what();
};

#endif // MYOTHEREXCEPTION_HPP
