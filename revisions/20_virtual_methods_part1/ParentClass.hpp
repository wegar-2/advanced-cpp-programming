#ifndef PARENTCLASS_HPP
#define PARENTCLASS_HPP

class ParentClass {
    public:
        ParentClass();
        ParentClass(int i_x, double d_y);
        ~ParentClass();
        virtual void PrintObj() const;
    private:
        int i_x;
        double d_y;
};

#endif // PARENTCLASS_HPP
