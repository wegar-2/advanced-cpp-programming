#include <iostream>
#include <sstream> // this library is the new thing in this lesson
#include <string>
#include "Person.hpp"

Person::Person(std::string name, std::string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}

std::string Person::ToString() {
    std::stringstream stm;
    stm << name << ", " << surname << ", " << age;
    // convert stm to string when returning
    return stm.str();
}

