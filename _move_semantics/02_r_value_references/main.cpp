#include <iostream>
#include "MyZeroDenomError.hpp"
#include "Fraction1.hpp"

using std::cout;
using std::endl;

int main()
{
    /* ====================================================================== */
    /* ====================      l-values and r-values      ================= */
    /* ====================================================================== */
    /*

    L-values and r-values -- these are actually EXPRESSIONS and not values as such.
    Every expression has two properties:
        1) type (e.g. int, double, etc.)
        2) value category (l-value or r-value)

    SIMPLIFIED DEFINITONS OF L-VALUES and R-VALUES:
        1) l-value --- a function or an object
        2) r-value --- anything that is not an l-value

    L-value reference:

    */
    /* ====================================================================== */


    /* ====================================================================== */
    /* Quick revision: const keyword and pointers */
    int* p1 = new int(10);
    int* const p2 = new int(20); // can't change the place in memory p2 is pointing at
    *p2 = 21; // this is OK
//    p2 = p1; // this won't compile
    const int* p3 = new int(33); // p3 is a pointer that is pointing at a constant value
//    *p3 = 44; // this won't compile
    p3 = p1; // this is OK
    const int* const p4 = new int(100); // p4 is a pointer that is pointing at a fixed
    // location in memory and the value it is pointing at is constant
    /* ====================================================================== */


    /* ====================================================================== */
    /* L-value and r-value references */
    int x;
    int& ref_x = x; // ref_x is an l-value reference; it is initialized with an l-value
    int&& ref_rval = 123; // ref_rval is an r-value reference
    const int& ref_lval = 1233; // l-value const reference can be initialized with
    // an r-value (1233 int in this case)
    /* ====================================================================== */


    /* ====================================================================== */
    int value1 = 123;
    Fraction1 frac = Fraction1();
    frac.SetNum(222);
    frac.SetNum(value1);
    /* ====================================================================== */

    return 0;
}
