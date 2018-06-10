#ifndef DIVIDEBYZEROERR_HPP
#define DIVIDEBYZEROERR_HPP

#include <stdexcept>

using namespace std;

// the created class inherits from runtime_error
class DivideByZeroErr : public runtime_error {
    // note that only class constructor is defined here
    public:
        DivideByZeroErr();
};

#endif // DIVIDEBYZEROERR_HPP
