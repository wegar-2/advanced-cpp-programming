#include <iostream>
#include "MyQueue.hpp"
#include <string>
#include "QueueExceptions.hpp"


using namespace std;

int main()
{
    MyQueue<int, 5> queue0 = MyQueue<int, 5>();
    queue0.inQueue(10);
    queue0.inQueue(4);
    queue0.inQueue(4123);
    queue0.inQueue(111);
    queue0.inQueue(11);
    try {
        queue0.inQueue(1);
    }
    catch (FullQueueException e) {
        cout << e.what() << endl;
        cout << "Exception successfully caught..." << endl;
    }
    catch (...) {
        cout << "General exception caught..." << endl;
    }
    queue0.showQueue();

    return 0;
}
