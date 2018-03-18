#include <iostream>
#include "MyFunctions.hpp"

using namespace std;


int main()
{

    // 1.
    cout << "MyTemplateFunction function: " << endl;
    cout << MyTemplateFunction<int> (123) << endl;

    // 2.
    MyAnotherTemplateFunction<int, double> (123, 323);
    return 0;
}
