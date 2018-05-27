#include "Point2D.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <list>
#include <deque>
#include <string>

using namespace std;

int main()
{
    /* ************************************************************** */
    /* ************************************************************** */
    /* overview of basic sequential containers */
    // 1. vector of integers
    vector<int> vec1(10);
    for (int k = 0; k < 10; k++) {
        vec1.push_back((rand() % 100 + 1));
    }
    vector<int>::iterator iter1 = vec1.begin();
    while(iter1 != vec1.end()) {
        cout << *iter1 << endl;
        iter1++;
    }
    // 2. list
    list<string> names;
    names.push_back("John");
    names.push_back("Eva");
    names.push_back("Ellie");
    list<string>::iterator names_iter = names.begin();
    for (names_iter; names_iter != names.end(); names_iter++) {
        cout << *names_iter << endl;
    }
    cout << "Front of names list: " << *(names.begin()) << endl;

    /* ************************************************************** */
    /* ************************************************************** */
    /* Point2D */

    Point2D point1 = Point2D(1.2, 3.3);
    point1.PrintThisPoint();
    ++point1;
    point1.PrintThisPoint();
    --point1;
    --point1;
    point1.PrintThisPoint();

    return 0;
}
