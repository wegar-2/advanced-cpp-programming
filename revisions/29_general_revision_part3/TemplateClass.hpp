#ifndef MYTEMPLATECLASS_HPP
#define MYTEMPLATECLASS_HPP

template <class T1, class T2>
class MyTemplateClass {
public:
    // constructors and destructor
    MyTemplateClass();
    MyTemplateClass(T1 value1);
    MyTemplateClass(T2 value2);
    MyTemplateClass(T1 value1, T2 value2);
    ~MyTemplateClass();
    // copy constructor
    MyTemplateClass<T1, T2>& MyTemplateClass(MyTemplateClass<T1, T2>& rhs);
    // assignment operator


private:
    T1* member1;
    T2* member2;
};

#endif // MYTEMPLATECLASS_HPP

