#include <iostream>
#include <algorithm>
#include <string>
#include "make_vector.hpp"
#include "display_vector.hpp"

using namespace std;

int main()
{
    /* ******************************************* */
    // fill() algorithm
    // Example 1
    vector<int> vec0 = make_vector(10);
    display_vector<int>(vec0);
    fill(vec0.begin(), vec0.end(), int(123));
    display_vector<int>(vec0);
    // Example 2
    vector<string> vec_of_strings;
    vec_of_strings.push_back("asdf");
    vec_of_strings.push_back("qqwer");
    vec_of_strings.push_back("zxcv");
    display_vector(vec_of_strings);
    fill(vec_of_strings.begin(), vec_of_strings.end(), "_");
    display_vector(vec_of_strings);

    /* ******************************************* */
    // replace() algorithm <---- changing a value in a vector

    // Example 1
    vector<int> vec_of_ints = make_vector(30);
    display_vector(vec_of_ints);
    replace(vec_of_ints.begin(), vec_of_ints.end(), 9, 444);
    display_vector(vec_of_ints);

    // Example 2
    vector<string> function_definition;
    function_definition.push_back("Function");
    function_definition.push_back(" is a relation");
    function_definition.push_back(" such that");
    function_definition.push_back(" for any x domain X");
    function_definition.push_back(" there exists");
    function_definition.push_back(" only one");
    function_definition.push_back(" y in codomain Y");
    function_definition.push_back(" such that xRy.");
    cout << "\n\nPrinting correct definition: " << endl;
    display_vector(function_definition);
    replace(function_definition.begin(), function_definition.end(),
            string(" only one"), string(" none"));
    cout << "\n\nPrinting incorrect definition: " << endl;
    display_vector(function_definition);


    return 0;
}
