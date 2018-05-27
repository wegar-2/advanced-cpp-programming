#include <iostream>
#include <deque>
#include <string>

using namespace std;

void print_deque(deque<string> deque_in);

int find_in_deque(deque<string> deque_in, string value);

int main()
{
    deque<string> dequeue;
    // 1. push_back, push_front
    dequeue.push_back("Alice");
    dequeue.push_back("Jonathan");
    dequeue.push_front("Ezequiel");
    dequeue.push_back("Victoria");
    dequeue.push_front("Moses");

    // 2. pop_front, pop_back
    dequeue.pop_back();
    dequeue.pop_front();

    // 3. iterator over dequeue
    deque<string>::iterator iter = dequeue.begin();
    while (iter != dequeue.end()) {
        cout << *iter << endl;
        iter++;
    }

    // 4. checking implementation of find_in_deque function
    dequeue.push_back("Alice");
    dequeue.push_back("Jonathan");
    dequeue.push_front("Ezequiel");
    dequeue.push_back("Victoria");
    dequeue.push_front("Moses");
    print_deque(dequeue);
    int res = find_in_deque(dequeue, "Victoria");
    cout << "res: " << res << endl;

    return 0;
}

void print_deque(deque<string> deque_in) {
    cout << "Inside print_deque function; printing out contents of a deque: " << endl;
    for (int k = 0; k < deque_in.size(); k++) {
        cout << "\t" << deque_in[k] << endl;
    }
}

int find_in_deque(deque<string> deque_in, string value) {
    for (int k = 0; k < deque_in.size(); k++) {
        if (deque_in[k] == value) {
            return k;
        }
    }
    return -1;
}


