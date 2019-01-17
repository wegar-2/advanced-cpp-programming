#ifndef TEMPLATEPOINT2D_HPP
#define TEMPLATEPOINT2D_HPP

template <typename T1>
class TemplatePoint2D {
public:
    // class constructors and destructor
    TemplatePoint2D();
    TemplatePoint2D(T1 value);
    TemplatePoint2D(T1 x, T1 y);
    ~TemplatePoint2D();
    // copy constructor
    TemplatePoint2D(const TemplatePoint2D<T1>& rhs);
    // assignment operator
    const TemplatePoint2D<T1>& operator=(const TemplatePoint2D<T1>& rhs);
    // increment operator overloading
    const TemplatePoint2D<T1>& operator++(); // prefix operator
    const TemplatePoint2D<T1> operator++(int); // post-fix operator
    // decrement operator overloading
    const TemplatePoint2D<T1>& operator--(); // prefix operator
    const TemplatePoint2D<T1> operator--(int); // post-fix operator
    // addition and subtraction operators overloading
    TemplatePoint2D<T1> operator+(const TemplatePoint2D<T1>& rhs) const;
    TemplatePoint2D<T1> operator-(const TemplatePoint2D<T1>& rhs) const;
    // setters and getters
    void SetX(T1 x);
    void SetY(T1 y);
    T1 GetX() const;
    T1 GetY() const;
    unsigned int GetId() const;
    // other class methods
    void PrintThisPoint() const;
private:
    T1* pX;
    T1* pY;
    unsigned int* pId; // storing Id of every instance
    static unsigned int* pInstCounter; // keeping track of the number of created instances
};

#endif // TEMPLATEPOINT2D_HPP

