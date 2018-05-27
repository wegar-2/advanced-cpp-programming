#ifndef TEMPLATECLASS_HPP
#define TEMPLATECLASS_HPP

template <typename T1, typename T2, typename T3>
class TemplateClass {
    public:
        TemplateClass();
        TemplateClass(T1 arg1, T2 arg2, T3 arg3);
        void DisplayClass();
        void SetX1(T1 arg);
        void SetX2(T2 arg);
        void SetX3(T3 arg);
        T1 GetX1();
        T2 GetX2();
        T3 GetX3();
    private:
        T1 x1;
        T2 x2;
        T3 x3;
};

#endif // TEMPLATECLASS_HPP
