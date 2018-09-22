#include "StochasticProcess.hpp"
#include <iostream>

using std::endl;
using std::cout;



/* ========================================================================== */
/* class constructors and destructor */
StochasticProcess::StochasticProcess() {
    cout << "Class' StochasticProcess default constructor called..." << endl;
    pTimeHorizon = new double(1.0);
    pSteps = new unsigned int(2);
}

StochasticProcess::StochasticProcess(double time, unsigned int steps) {
    cout << "Class' StochasticProcess parametrized constructor called..." << endl;
    pTimeHorizon = new double(time);
    pSteps = new unsigned int(steps);
}

StochasticProcess::~StochasticProcess() {
    cout << "Class' StochasticProcess constructor called..." << endl;
    delete pTimeHorizon;
    pTimeHorizon = nullptr;
    delete pSteps;
    pSteps = nullptr;
}



/* ========================================================================== */
/* class' pure virtual functions */
double* StochasticProcess::MakeTrajectory() const {
    cout << "MakeTrajectory function of an ABC - returns two-element list..."
    << endl;
    double* pTrajectory = new double[2];
    pTrajectory[0] = 0.0;
    pTrajectory[1] = 1.0;
    return pTrajectory;
}

void StochasticProcess::DescribeStochasticProcess() const {
    cout << "This stochastic process has the following properties: " << endl;
    cout << "\ttime horizon: " << *pTimeHorizon << endl;
    cout << "\tsteps number: " << *pSteps << endl;
};



/* ========================================================================== */
/* other class functions */
double StochasticProcess::GetTimeHorizon() const {
    return *pTimeHorizon;
}

void StochasticProcess::SetTimeHorizon(double time) {
    *pTimeHorizon = time;
}

unsigned int StochasticProcess::GetStepsNumber() const {
    return *pSteps;
}

void StochasticProcess::SetStepsNumber(unsigned int steps) {
    *pSteps = steps;
}


