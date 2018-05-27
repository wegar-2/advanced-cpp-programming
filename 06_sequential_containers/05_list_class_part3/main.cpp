#include <iostream>
#include <list>
#include <cstdlib>

using namespace std;

template <typename T>
list<T>& AddListElements(list<T>& list_in, int N);

void PrintListOfInts(list<int> list_in);

template <typename T>
void GenericListPrint(list<T>& list_in);

int main()
{
    // 1. testing a function on list of integers
    list<int> list_of_ints;
    AddListElements<int>(list_of_ints, 10);
    cout << list_of_ints.size() << endl;
    PrintListOfInts(list_of_ints);

    list<string> names;
    names.push_back("John");
    names.push_back("Raymond");
    names.push_back("Alexa");
    names.push_back("Sophia");

    // 2. testing a generic print function on a list of strings
    GenericListPrint(names);

    // 3. push_front() function
    names.push_front("Joseph");
    names.push_front("Elizabeth");
    names.push_front("John");
    cout << "Added a few more names..." << endl;
    GenericListPrint(names);

    // 4. size() function
    cout << names.size() << endl;

    // 5. remove() function: removes all occurrences of John!
    cout << "Removing John" << endl;
    names.remove("John");
    GenericListPrint(names);

    // 6. pop_front() and pop_back() methods
    cout << "Popping..." << endl;
    names.pop_front();
    names.pop_back();
    GenericListPrint(names);

    // 7. clear() function - remove all list elements & empty() function
    cout << "Clearing the list..." << endl;
    names.clear();

    return 0;
}

template <typename T>
list<T>& AddListElements(list<T>& r_list_in, int N) {
    for (int k = 0; k < N; k++) {
        r_list_in.push_back(static_cast<T>(rand() % 100));
    }
    return r_list_in;
}

void PrintListOfInts(list<int> list_in) {
    list<int>::iterator iter1 = list_in.begin();
    while (iter1 != list_in.end()) {
        cout << "\t" << *iter1 << endl;
        iter1++;
    }
}

template <typename T>
void GenericListPrint(list<T>& list_in) {
    cout << "Printing a list: " << endl;
    typename list<T>::iterator iter = list_in.begin();
    while (iter != list_in.end()) {
        cout << "\t" << *iter << endl;
        iter++;
    }
}
