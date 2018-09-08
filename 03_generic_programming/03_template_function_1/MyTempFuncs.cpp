#include "MyTempFuncs.hpp"
#include <iostream>


/* ------------------------------------------------------------------ */
/* definitions of the template functions */

template <typename T1, typename T2>
T2 MyTempFunctionOne(T1 arg1, T2 arg2) {
    std::cout << "Inside MyTempFunctionOne..." << std::endl;
    T2 arg1_cd = static_cast<T2>(arg1);
    return arg1_cd*arg2;
}

template <typename T1, typename T2, typename T3>
void MyTempFunctionTwo(T1 arg1, T2 arg2, T3 arg3) {
    std::cout << "Inside MyTempFunctionTwo..." << std::endl;
    std::cout << "Displaying he obtained arguments:" << std::endl;
    std::cout << "\targ1: " << arg1 << std::endl;
    std::cout << "\targ2: " << arg2 << std::endl;
    std::cout << "\targ3: " << arg3 << std::endl;
}



/* ------------------------------------------------------------------ */
/* explicit instantiations of the template functions */

template double MyTempFunctionOne<int, double>(int arg1, double arg2);
template void MyTempFunctionTwo<int, double, double> (int arg1, double arg2, double arg3);

