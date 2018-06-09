#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    srand(0);
    // 1. getline() function
    string name;
    cout << "Type in name and surname: ";
    getline(cin, name);
    cout << "Obtained name and surname: " << name;
    cout << endl << endl << endl;
    // 2. getting a character
    char temp_char;
    do {
        temp_char = cin.get();
        cout.put(temp_char);
    } while (!cin.eof());
    return 0;
}
