#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>
#include <string>
#include "display_vector.hpp"
#include "make_deque.hpp"
#include "display_deque.hpp"

using namespace std;

// copy() algorithm, front_inserter, back_inserter

int main()
{
    /* *************************************************** */
    // 1. vectors
    vector<int> vec0;
    vec0.push_back(1);
    vec0.push_back(2);
    vec0.push_back(22);
    vector<int> vec1;
    vec1.push_back(222);
    vec1.push_back(333);
    vec1.push_back(444);
    copy(vec0.begin(), vec0.end(), back_inserter(vec1));
    display_vector(vec1);
    copy(vec1.begin(), vec1.end(), back_inserter(vec0));
    display_vector(vec0);

    /* *************************************************** */
    // 2. deque
    // 2.1. displaying deques
    deque<int> deque1 = make_deque<int>(6);
    deque<int> deque2 = make_deque<int>(6);
    deque<int> another_deque = make_deque<int>(4);
    cout << "deque1: " << endl;
    display_deque<int>(deque1);
    cout << "deque2: " << endl;
    display_deque<int>(deque2);
    cout << "another_deque: " << endl;
    display_deque<int>(another_deque);
    // 2.2. front-insert
    cout << "Front-inserting into deque1: " << endl;
    copy(another_deque.begin(), another_deque.end(), front_inserter(deque1));
    display_deque<int>(deque1);
    // 2.3. back-insert
    cout << "Back-inserting into deque2: " << endl;
    copy(another_deque.begin(), another_deque.end(), back_inserter(deque2));
    display_deque<int>(deque2);
    return 0;
}

