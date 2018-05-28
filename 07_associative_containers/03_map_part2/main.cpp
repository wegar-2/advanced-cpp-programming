#include <iostream>
#include <map>
#include <cstdlib>
#include <utility>

using namespace std;

template <typename T>
map<int, T> MakeMap(int n);

template <typename T>
void DisplayArray(map<int, T> map_in);


int FindPerson(map<string, int> map_in, string name);

int main()
{
    // 1. first map
    map<int, int> map1 = MakeMap<int>(10);
    DisplayArray(map1);

    // 2. second map
    map<int, double> map2 = MakeMap<double>(10);
    DisplayArray(map2);

    // 3. looking for a value in keys of a map
    map<string, int> salaries;
    salaries["John"] = 123;
    salaries["Mary"] = 3233;
    salaries["Jack"] = 324;
    salaries["Bob"] = 23123;
    salaries["Jane"] = 9090;
    salaries["Alice"] = 323;
    salaries["Alexa"] = 5439;

    string name;
    cout << "Name to look for: " << endl;
    cin >> name;

    cout << "Salary of this person is: " << FindPerson(salaries, name) << endl;

    return 0;
}

template <typename T>
map<int, T> MakeMap(int n) {
    map<int, T> map_out;
    for (int k = 0; k < n; k++) {
        map_out[k] = static_cast<T>(rand() % 5);
    }
    return map_out;
}

template <typename T>
void DisplayArray(map<int, T> map_in) {
    cout << "Displaying a map: " << endl;
    typename map<int, T>::iterator iter = map_in.begin();
    while (iter != map_in.end()) {
        cout << "\tkey: " << iter->first << endl;
        cout << "\tvalue: " << iter->second << endl;
        iter++;
    }
}

int FindPerson(map<string, int> map_in, string name) {
    if (map_in.find(name) != map_in.end()) {
        return map_in[name];
    }
    else {
        return -1;
    }
}
