#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include <exception>

class MyException : public std::exception {
    public:
        const char* what() const throw();
};

#endif // MYEXCEPTION_HPP
