#include <iostream>
#include <cstdlib>

int main()
{
    // 1. non-const pointers
    int x = 123;
    std::cout << "x = " << x << std::endl;
    std::cout << "&x = " << &x << std::endl;
    int* px = &x;
    std::cout << "px = " << px << std::endl;
    std::cout << "*px = " << *px << std::endl;

    // 2. using 'const' keyword with pointers: const values
    const int y = 123; // const integer
    //int* py = &y;  // this will not work, as the pointer treat y as non-const
    const int* py = &y;
    std::cout << "y = " << y << std::endl;
    std::cout << "&y = " << &y << std::endl;
    std::cout << "py = " << py << std::endl;
    std::cout << "*py = " << *py << std::endl;

    // 3. using 'const' keyword with pointers: const pointers
    int z = 1232;
    int* const pz = &z;
    //pz = &x; // this will not work: pz was defined to point at one place in memory only!

    // 4. const pointer to const value
    int v = 223;
    const int* const pv = &v;
    // the assignments below will not compile since the compiler sees the pv pointer as const pointer to const value
    //*pv = 11;
    //pv = &y;

    // 5. pointer to const value - tricking the pointer
    int u = random() % 100 + 1;
    std::cout << "Before: " << std::endl;
    std::cout << "u = " << u << std::endl;
    const int* pu = &u;
    std::cout << "*pu = " << *pu << std::endl;
    u = random() % 100 + 1;
    std::cout << "After: " << std::endl;
    std::cout << "u = " << u << std::endl;
    std::cout << "*pu = " << *pu << std::endl;


    return 0;
}
