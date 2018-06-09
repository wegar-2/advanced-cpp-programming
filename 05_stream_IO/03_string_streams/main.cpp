#include <iostream>
#include <sstream>
#include "Person.hpp"
#include <string>

using namespace std;

int main()
{
    Person person(string("John"), string("Amber"), 123);
    cout << "a person: " << person.ToString() << endl;
    return 0;
}
