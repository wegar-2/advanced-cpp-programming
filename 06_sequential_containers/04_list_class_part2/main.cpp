#include <iostream>
#include <list>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    /* ************************************************************** */
    /* *********** revision of the material on list class *********** */
    /* ************************************************************** */
    // 1.
    list<int> ListOfInts(100);
    for (unsigned int k = 0; k < 100; k++) {
        ListOfInts.push_back((rand() % 100) + 1);
    }
    cout << "ListOfInts.front() = " << ListOfInts.front() << endl;
    cout << "ListOfInts.back() = " << ListOfInts.back() << endl;
    // 2.
    list<int>::iterator iter1 = ListOfInts.begin();
    cout << "Displaying list ListOfInts: " << endl;
    while (iter1 != ListOfInts.end()) {
        cout << "\t" << *iter1 << endl;
        iter1++;
    }
    // 3.
    ListOfInts.reverse();
    list<int>::iterator iter2 =

    // 4.


    return 0;
}
