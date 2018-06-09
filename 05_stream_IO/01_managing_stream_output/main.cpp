#include <iostream>
#include <fstream> // this library is the second library that will be used in this chapter
#include <thread>
#include <chrono> // necessary to pass time to the this_thread::sleep_for function
#include "HelperClass.hpp"

/*
    Two libraries are used for working with streams in C++:
        1) iostream: cin, cout, cerr
        2) fstream: working with files: ifstream, ofstream
*/

using namespace std;

int main()
{
    // 0.
    cout << "hello, world!..." << endl;
    cout.put('h').put('\n');
    cout.put('i').put('\n');
    cout.put('!').put('\n');
    cout << endl;

    // 1. flushing the buffer - practical application
    cout << "flush() function used..." << endl;
    for (int i = 0; i < 11; i++) {
        // halt execution for some time
        this_thread::sleep_for(chrono::seconds(1));
        cout << i << " " << flush;
    }
    cout << endl;
    cout << "flush() function not used..." << endl;
    for (int i = 0; i < 11; i++) {
        this_thread::sleep_for(chrono::seconds(1));
        cout << i << " ";
    }

    // 2. using the overloaded << operator in user-defined class
    HelperClass obj0 = HelperClass();
    HelperClass obj1 = HelperClass(0, 20, 20, 25, static_cast<unsigned int>(200));

    cout << "Printing obj0:" << endl;
    obj0.print();

    cout << "Printing obj0:" << endl;
    obj1.print();

    return 0;
}
