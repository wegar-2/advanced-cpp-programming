#ifndef TEMPCLASS_HPP
#define TEMPCLASS_HPP

template <typename T>
class TempClass {
public:
    TempClass();
    TempClass(T arg);
    T GetValue();
private:
    T field1;
};


#endif // TEMPCLASS_HPP
