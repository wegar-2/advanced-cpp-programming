#include "MyOtherException.hpp"
#include <iostream>

const char* MyOtherException::what() {
    return "Yet another exception...";
}

