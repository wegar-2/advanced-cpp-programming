#include <iostream>
#include <vector>
#include <deque>
#include "make_numeric_vector.hpp"
#include "display_containers.hpp"

using namespace std;

int main()
{
    vector<int> vec0 = make_numeric_vector(20);
    display_vector(vec0, false);
    display_vector(vec0, true);
    return 0;
}
