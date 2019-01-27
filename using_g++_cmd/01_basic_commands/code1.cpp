#include <iostream>
#include <cstdlib>

int main () {

	std::cout << "Allocating memory on the heap..." << std::endl;
	int* IntsArray = new int[100];

	std::cout << "Generating random numbers..." << std::endl;
	for (int k = 0; k < 100; ++k) {
		IntsArray[k] = random() % 100 + 1;
	}

	std::cout << "Printing elements of the array: " << std::endl;
	for (int k = 0; k < 100; ++k) {
		std::cout << "IntsArray[" << k << "] = " << IntsArray[k] << std::endl;
	}

	std::cout << "Releasing memory from heap..." << std::endl;
	delete[] IntsArray;

	return 0;
}


