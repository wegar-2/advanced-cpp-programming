#include <iostream>
#include "HelperClass.hpp"

using namespace std;

int main()
{
    HelperClass2 hcObj = HelperClass2();
    cout << hcObj->GetValue();
    return 0;
}
