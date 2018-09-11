#ifndef CHILD1_HPP
#define CHILD1_HPP

#include "ParentOne.hpp"
#include "ParentTwo.hpp"

class Child1 : public ParentOne, public ParentTwo {
public:
    Child1(int value1, int value2) :
        ParentOne(value1), ParentTwo(value2) {};
};

#endif // CHILD1_HPP


#ifndef CHILD2_HPP
#define CHILD2_HPP

#include "ParentOne.hpp"
#include "ParentTwo.hpp"

class Child2 : public ParentOne, public ParentTwo {
public:
    Child2(int value1, int value2) :
        ParentTwo(value1), ParentOne(value2) {};
};

#endif // CHILD2_HPP
