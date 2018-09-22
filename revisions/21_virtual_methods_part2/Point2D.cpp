#include "Point2D.hpp"
#include <iostream>
#include <cmath>

using std::cout;
using std::endl;




/* ========================================================================== */
/* static member variables initialization */
template <typename T>
unsigned int* Point2D<T>::pInstancesCounter = new unsigned int(0);

template <typename T>
unsigned int* Point2D<T>::pAllPointsCounter = new unsigned int(0);



/* ========================================================================== */
/* class constructors and destructor*/
template <typename T>
Point2D<T>::Point2D() {
    cout << "Class Point2D default constructor..." << endl;
    pX = new T();
    pY = new T();
    *pInstancesCounter += 1;
    *pAllPointsCounter += 1;
    pID = new unsigned int(*pAllPointsCounter);
}

template <typename T>
Point2D<T>::Point2D(T arg) {
    cout << "One-parameter Point2D class constructor..." << endl;
    pX = new T(arg);
    pY = new T(arg);
    *pInstancesCounter += 1;
    *pAllPointsCounter += 1;
    pID = new unsigned int(*pAllPointsCounter);
}

template <typename T>
Point2D<T>::Point2D(T x, T y) {
    cout << "Two-parameters Point2D class constructor..." << endl;
    pX = new T(x);
    pY = new T(y);
    *pInstancesCounter += 1;
    *pAllPointsCounter += 1;
    pID = new unsigned int(*pAllPointsCounter);
}

template <typename T>
Point2D<T>::Point2D(const Point2D& rhs) {
    cout << "Class Point2D copy constructor..." << endl;
    pX = new T(rhs.GetX());
    pY = new T(rhs.GetY());
    *pInstancesCounter += 1;
    *pAllPointsCounter += 1;
    pID = new unsigned int(*pAllPointsCounter);
}

template <typename T>
Point2D<T>::~Point2D() {
    delete pX;
    delete pY;
    *pInstancesCounter -= 1;
    delete pID;
}



/* ========================================================================== */
/* class methods */
template <typename T>
void Point2D<T>::SetX(T x) {
    *pX = x;
}

template <typename T>
void Point2D<T>::SetY(T y) {
    *pY = y;
}

template <typename T>
T& Point2D<T>::GetX() const {
    return *pX;
}

template <typename T>
T& Point2D<T>::GetY() const {
    return *pY;
}

template <typename T>
void Point2D<T>::PrintObject() const {
    cout << "Printing object with ID: " << *pID << endl;
    cout << "\tx = " << *pX << endl;
    cout << "\ty = " << *pY << endl;
}

template <typename T>
T Point2D<T>::GetDistanceFromOrigin() const {
    cout << "GetDistanceFromOrigin() template Point2D class method has been called..."
    << endl;
    cout << "This method needs to be specialized for specific types of T used..."
    << endl;
    return *pX;
}

template <typename T>
unsigned int Point2D<T>::GetObjectID() const {
    return *pID;
}


/* ========================================================================== */
/* static class methods */
template <typename T>
unsigned int Point2D<T>::GetInstancesCounter() {
    return (*pInstancesCounter);
}

template <typename T>
unsigned int Point2D<T>::GetAllPointsCounter() {
    return(*pAllPointsCounter);
}



/* ========================================================================== */
/* template specialization for the Point2D template class method 'GetDistance'
    from origin */
template <>
double Point2D<double>::GetDistanceFromOrigin() const {
    cout << "Specialization of the GetDistanceFromOrigin method for type 'double' called..."
     << endl;
    return(sqrt(pow(*pX, 2) + pow(*pY, 2)));
}

template <>
int Point2D<int>::GetDistanceFromOrigin() const {
    cout << "Specialization ofthe GetDistanceFromOrigin method for type 'int' called..."
    << endl;
    return(static_cast<int>(sqrt(pow(static_cast<double>(*pX), 2) +
                                 pow(static_cast<double>(*pY), 2))));
}



/* ========================================================================== */
/* implementation of operators */
template <typename T>
Point2D<T>& Point2D<T>::operator=(const Point2D<T>& rhs) {
    cout << "Template class' Point2D assignment operator called..." << endl;
    *pX = rhs.GetX();
    *pY = rhs.GetY();
    cout << "Finished assignment to object " << *pID <<
    " from object " << rhs.GetObjectID() << endl;
}

template <typename T>
Point2D<T> Point2D<T>::operator+(const Point2D<T>& rhs) {
    cout << "Addition operator called on instances of template class Point2D; "
    << "This method needs to be provided specialization for various types;"
    << "For now, only the method returns the object on which it was called. "
    << endl;
    return *this;
}

// addition operator specialization for type 'double'
template <>
Point2D<double> Point2D<double>::operator+(const Point2D<double>& rhs) {
    return Point2D<double>(this->GetX() + rhs.GetX(),
                           this->GetY() + rhs.GetY());
}
// addition operator specialization for type 'int'
template <>
Point2D<int> Point2D<int>::operator+(const Point2D<int>& rhs) {
    return Point2D<int>(this->GetX() + rhs.GetX(),
                        this->GetY() + rhs.GetY());
}

/* ========================================================================== */
/* explicit instantiation of some cases of the template class Point2D */
template class Point2D<int>;
template class Point2D<double>;
