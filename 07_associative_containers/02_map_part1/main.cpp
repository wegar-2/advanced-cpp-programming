#include <iostream>
#include <map>
#include <cstdlib>
#include <string>

using namespace std;

map<int, int> MakeMap(int n);

void DisplayMap(map<int, int> map_in, int low, int high);

int main()
{
    // 1. first example of a map
    cout << "First map: " << endl;
    map<int, int> map1 = MakeMap(10);
    DisplayMap(map1, 0, 9);
    cout << endl;

    // 2. second example of a map
    cout << "First map: " << endl;
    map<string, int> map2;
    map2["a"] = 123;
    map2["b"] = 98;
    map2["c"] = 432;
    cout << "Number of elements of map2: " << map2.size() << endl;

    // 3. erase() method of map class
    cout << "Erasing 'b'..." << endl;
    map2.erase("b");
    cout << "Number of elements of map2: " << map2.size() << endl;
    return 0;
}

map<int, int> MakeMap(int n) {
    map<int, int> map_out;
    for (int k = 0; k < n; k++) {
        map_out[k] = rand() % 100;
    }
    return map_out;
}

void DisplayMap(map<int, int> map_in, int low, int high) {
    cout << "Displaying a map: " << endl;
    for (int k = low; k <= high; k++) {
        cout << "map_in[" << k << "] = " << map_in[k] << endl;
    }
}

