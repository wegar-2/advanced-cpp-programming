#ifndef MYSINGLETONCLASS_HPP
#define MYSINGLETONCLASS_HPP

class MySingletonClass {
private:
    // note that the constructor is private!
    MySingletonClass() {};
    static MySingletonClass* pObject;
public:
    static MySingletonClass* Instance();
};

#endif // MYSINGLETONCLASS_HPP
