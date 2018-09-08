#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // arrays in heap
    int* array_in_heap = new int[100];
    for (int k=0; k<100; ++k) { array_in_heap[k] = rand() % 20 + 1; }
    for (int k=0; k<100; ++k) {
        std::cout << "array_in_heap[" << k << "]=" << array_in_heap[k]
        << std::endl;
        std::cout << "&array_in_heap[" << k << "]=" << &array_in_heap[k]
        << std::endl;
    }

    // array of pointers
    int* array_of_pointers[100];
    for (int k=0; k<100; ++k) {
        array_of_pointers[k] = new int(rand() % 50 + 1);
    }
    for (int k=0; k<100; ++k) {
        // here the address stored in array cell is displayed
        std::cout << "array_of_pointers[" << k << "] = " <<
        array_of_pointers[k] << std::endl;
        // display the address of the place in memory in which a pointer is stored
        std::cout << "&array_of_pointers[" << k << "] = " <<
        &array_of_pointers[k] << std::endl;
        // finally, display the value that is pointed at by a pointer
        std::cout << "*array_of_pointers[" << k << "] = " <<
        *array_of_pointers[k] << std::endl;
    }
    return 0;
}
