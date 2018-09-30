#include <iostream>
#include "MyFunctor.hpp"

using std::endl;
using std::cout;


int main()
{
    MyFunctor ftor1 = MyFunctor();
    ftor1(10);
    cout << ftor1(22) << endl;
    ftor1[0] = 1000;
    cout << ftor1[0] << endl;
    for (int k=-1; k < 11; ++k) {
        cout << k << ": " << ftor1[k] << endl;
    }
    return 0;
}
