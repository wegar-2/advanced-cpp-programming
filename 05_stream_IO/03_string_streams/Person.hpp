#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Person {
    public:
        Person(std::string name, std::string surname, int age);
        std::string ToString();
    private:
        std::string name;
        std::string surname;
        int age;
};

#endif // PERSON_HPP



