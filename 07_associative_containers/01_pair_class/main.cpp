#include <iostream>
#include <utility>
#include <string>

using namespace std;

template <typename T>
void DisplayPair(pair<T, T>* pPair);

template <typename T1, typename T2>
void DisplayPair(pair<T1, T2>* pPair);

int main()
{
    // 1.
    pair<string, string> pair1("Jones", "1234");
    pair<string, string> pair2 = pair<string, string>("Brown", "3333");
    cout << "pair1: " << endl;
    DisplayPair<string, string>(&pair1);
    cout << "pair2: " << endl;
    DisplayPair<string, string>(&pair2);

    // 2.
    pair<string, int> pair3("John", 111);
    pair<string, int> pair4("Andrew", 120);
    cout << "pair3: " << endl;
    DisplayPair<string, int>(&pair3);
    cout << "pair3: " << endl;
    DisplayPair<string, int>(&pair4);

    return 0;
}

template <typename T>
void DisplayPair(pair<T, T>* pPair) {
    cout << "Displaying a pair: " << endl;
    cout << "\tfirst: " << (*pPair).first << endl;
    cout << "\tsecond: " << pPair->second << endl;
}

template <typename T1, typename T2>
void DisplayPair(pair<T1, T2>* pPair) {
    cout << "Displaying a pair: " << endl;
    cout << "\tfirst: " << (*pPair).first << endl;
    cout << "\tsecond: " << pPair->second << endl;
}
