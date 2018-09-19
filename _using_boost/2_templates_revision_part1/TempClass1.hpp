#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// this template class is implemented in the header file only

template <typename T1, typename T2>
class TempClass1 {
public:
    // class constructors and destructor
    TempClass1();
    ~TempClass1();
    TempClass1(T1 arg1, T2 arg2);
    TempClass1(const TempClass1& rhs);
    // operators
    TempClass1& operator=(const TempClass1& rhs);
    // other class methods
    void DisplayThisObject() const;
    void Set1(T1 arg);
    void Set2(T2 arg);
    T1 Get1() const;
    T2 Get2() const;
    static unsigned int GetInstancesNumber();
private:
    T1* pObj1;
    T2* pObj2;
    unsigned int objectId;
    static unsigned int instancesCounter;
};


/* ========================================================================== */
/* initialization of the static member of class */
template <typename T1, typename T2>
unsigned int TempClass1<T1, T2>::instancesCounter = 0;


/* ========================================================================== */
/* constructors and destructor */

template <typename T1, typename T2>
TempClass1<T1, T2>::TempClass1() {
    cout << "Class TempClass1 default constructor..." << endl;
    pObj1 = new T1;
    pObj2 = new T2;
    ++instancesCounter;
}

template <typename T1, typename T2>
TempClass1<T1, T2>::TempClass1(T1 arg1, T2 arg2) {
    cout << "Class TempClass1 parametrized constructor..." << endl;
    pObj1 = new T1(arg1);
    pObj2 = new T2(arg2);
    ++instancesCounter;
}

template <typename T1, typename T2>
TempClass1<T1, T2>::~TempClass1() {
    cout << "Destructor of TempClass1 called..." << endl;
    delete pObj1;
    pObj1 = nullptr;
    delete pObj2;
    pObj2 = nullptr;
    --instancesCounter;
}

template <typename T1, typename T2>
TempClass1<T1, T2>::TempClass1(const TempClass1& rhs) {
    cout << "Copy constructor of TempClass1 called..." << endl;
    pObj1 = new T1(rhs.Get1());
    pObj2 = new T2(rhs.Get2());
    ++instancesCounter;
}


/* ========================================================================== */

template <typename T1, typename T2>
TempClass1<T1, T2>& TempClass1<T1, T2>::operator=(const TempClass1& rhs) {
    cout << "Class TempClass1 assignment operator called..." << endl;
    delete pObj1;
    delete pObj2;
    pObj1 = new T1(rhs.Get1());
    pObj2 = new T2(rhs.Get2());
    return *this;
}


/* ========================================================================== */
template <typename T1, typename T2>
void TempClass1<T1, T2>::DisplayThisObject() const {
    cout << "Displaying TempClass1 object number " << ": " << endl;
    cout << "\telement 1: " << *pObj1 << endl;
    cout << "\telement 2: " << *pObj2 << endl;
}

template <typename T1, typename T2>
void TempClass1<T1, T2>::Set1(T1 arg) {
    *pObj1 = arg;
}

template <typename T1, typename T2>
void TempClass1<T1, T2>::Set2(T2 arg) {
    *pObj2 = arg;
}

template <typename T1, typename T2>
T1 TempClass1<T1, T2>::Get1() const {
    return *pObj1;
}

template <typename T1, typename T2>
T2 TempClass1<T1, T2>::Get2() const {
    return *pObj2;
}

template <typename T1, typename T2>
unsigned int TempClass1<T1, T2>::GetInstancesNumber() {
    return instancesCounter;
}
