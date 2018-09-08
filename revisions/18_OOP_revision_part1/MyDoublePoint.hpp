#ifndef MYDOUBLEPOINT_HPP
#define MYDOUBLEPOINT_HPP

class MyDoublePoint {
    public:
        MyDoublePoint(); // default constructor
        MyDoublePoint(double v); // one-parameter constructor
        MyDoublePoint(double x, double y); // two-parameter constructor
        ~MyDoublePoint(); // class destructor
        MyDoublePoint(const MyDoublePoint& rhs); // class copy constructor
        // getters and setters
        void SetX(double x);
        void SetY(double y);
        double GetX() const;
        double GetY() const;
        // other methods
        void DisplayCoords() const;
        double CalcDistFromOrigin() const;
        void MultCoordsByConst(double c);
    private:
        double* pCoordX;
        double* pCoordY;
};

#endif // MYDOUBLEPOINT_HPP
