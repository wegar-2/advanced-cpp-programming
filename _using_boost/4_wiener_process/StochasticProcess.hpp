#ifndef STOCHASTICPROCESS_HPP
#define STOCHASTICPROCESS_HPP

#include <iostream>

using std::cout;
using std::endl;

class StochasticProcess {
public:
    // constructors and destructor
    StochasticProcess();
    StochasticProcess(double time, unsigned int steps);
    virtual ~StochasticProcess(); // destructor has to be virtual!!!
    StochasticProcess(const StochasticProcess& rhs);
    // pure virtual class function to make this class an ABC
    virtual double* MakeTrajectory() const = 0;
    virtual void DescribeStochasticProcess() const = 0;
    // other class functions
    virtual double GetTimeHorizon() const;
    virtual void SetTimeHorizon(double time);
    virtual unsigned int GetStepsNumber() const;
    virtual void SetStepsNumber(unsigned int steps);
protected:
    double* pTimeHorizon;
    unsigned int* pSteps;
};




#endif // STOCHASTICPROCESS_HPP
