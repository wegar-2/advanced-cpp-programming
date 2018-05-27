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
    // 1. create a list of integers
    list<int> ListOfInts(0);
    for (unsigned int k = 0; k < 10; k++) {
        ListOfInts.push_back((rand() % 100) + 1);
    }
    cout << "ListOfInts.front() = " << ListOfInts.front() << endl;
    cout << "ListOfInts.back() = " << ListOfInts.back() << endl;
    // 2. print the list of integers using an iterator
    cout << "Printing the list of integers: " << endl;
    list<int>::iterator iter1 = ListOfInts.begin();
    cout << "Displaying list ListOfInts: " << endl;
    while (iter1 != ListOfInts.end()) {
        cout << "\t" << *iter1 << endl;
        iter1++;
    }
    // 3. print the list of integers in reverse order
    cout << "Printing the list of integers in reverse order: " << endl;
    ListOfInts.reverse();
    list<int>::iterator iter2 = ListOfInts.begin();
    for (iter2; iter2 != ListOfInts.end(); iter2++) {
        cout << "\t" << *iter2 << endl;
    }
    // 4. sort the list of integers and print it
    cout << "Printing the sorted list of integers: " << endl;
    ListOfInts.sort();
    list<int>::iterator iter3 = ListOfInts.begin();
    for (iter3; iter3 != ListOfInts.end(); iter3++) {
        cout << "\t" << *iter3 << endl;
    }
    return 0;
}
