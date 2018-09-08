#include "MyFunctions.hpp"

void MySwapFunction(unsigned int& rArg1, unsigned int& rArg2) {
    int temp = rArg1;
    rArg1 = rArg2;
    rArg2 = temp;
}

// ugly, quick implementation
unsigned int findGCD(unsigned int m, unsigned int n) {
    if (m == 0 || n == 0) {
        return  m == 0 ? m : n;
    }
    else if (m == n){
        return m;
    }
    else {
        // make sure that m is the larger number
        if (m < n) { MySwapFunction(m, n); }
        else {
            int temp;
            do {
                temp = m % n;
                m = n;
                n = temp;
            } while (temp > 0);
            return m;
        }
    }
}
