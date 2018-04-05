#include <iostream>
#include <string>
#include <list>

// list is a sequential container

using namespace std;

int main()
{
    // 1. creating a list class instance
    list<string> list1;
    list1.push_back("asdf");
    list1.push_back("qwerty");
    list1.push_back("foo");
    list1.push_back("bar");
    list1.push_back("fsjgfjhkfg");

    // 2. iterating over elements of a list: using iterator
    list<string>::iterator iter_list1 = list1.begin();
    while(iter_list1 != list1.end()) {
        cout << *iter_list1 << endl;
        iter_list1++;
    }

    // 3. displaying front and back
    cout << "list1.front() = " << list1.front() << endl;
    cout << "list1.back() = " << list1.back() << endl;

    // 4. reversing order of a list object
    list1.reverse();

    cout << "list1: " << endl;
    list<string>::iterator iter2_list1 = list1.begin();
    while (iter2_list1 != list1.end()) {
        cout << "\t" << *iter2_list1 << endl;
        iter2_list1++;
    }

    // 5. sorting a list
    list1.sort();
    list<string>::iterator iter3_list1 = list1.begin();
    while (iter3_list1 != list1.end()) {
        cout << "\t" << *iter3_list1 << endl;
        iter3_list1++;
    }

    return 0;
}
