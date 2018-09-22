#include "StochasticProcess.hpp"
#include "WienerProcess.hpp"
#include <iostream>
#include <cmath>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/variate_generator.hpp>


using std::endl;
using std::cout;



/* ========================================================================== */
/* static member variables initialization */

// 1. RNG engine - Mersenne twister
boost::random::mt19937 WienerProcess::rng_engine = boost::random::mt19937(123);
// 2. pick the normal distribution
boost::random::normal_distribution<> WienerProcess::rng_norm_dist =
                                        boost::random::normal_distribution<>(0, 1);
// 3. use the both above-defined static members to create variate_generator member
boost::random::variate_generator<boost::random::mt19937,
                                 boost::random::normal_distribution<>>
                                WienerProcess::rng_vargen =
    boost::random::variate_generator<boost::random::mt19937,
    boost::random::normal_distribution<>>(
            WienerProcess::rng_engine, WienerProcess::rng_norm_dist
        );



/* ========================================================================== */
/* constructors and destructor */
WienerProcess::WienerProcess() :
    StochasticProcess(),
    pMu(new double(0)),
    pSigma(new double(1)) {
    cout << "Class WienerProcess default constructor called..." << endl;
    //
    boost::random::mt19937 rng_engine(1);
    boost::random::normal_distribution<> rng_dist(0, 1);

}

WienerProcess::WienerProcess(double time, unsigned int steps, double mu, double sigma) :
    StochasticProcess(time, steps),
    pMu(new double(mu)),
    pSigma(new double(sigma)) {
    cout << "Class Wiener process parametrized constructor called..." << endl;
}


WienerProcess::~WienerProcess() {
    // parent destructor is called automatically!!!
    cout << "Class WienerProcess' destructor called..." << endl;
    delete pMu;
    pMu = nullptr;
    delete pSigma;
    pSigma = nullptr;
}

WienerProcess::WienerProcess(const WienerProcess& rhs) {
    cout << "Class WienerProcess copy constructor called..." << endl;
    *pTimeHorizon = rhs.GetTimeHorizon();
    *pSteps = rhs.GetStepsNumber();
    *pMu = rhs.GetMu();
    *pSigma = rhs.GetSigma();
}



/* ========================================================================== */
/* class operators */
WienerProcess& WienerProcess::operator=(const WienerProcess& rhs) {
    cout << "Class WienerProcess' assignment operator called..." << endl;
    *pTimeHorizon = rhs.GetTimeHorizon();
    *pSteps = rhs.GetStepsNumber();
    *pMu = rhs.GetMu();
    *pSigma = rhs.GetSigma();
    return *this;
}



/* ========================================================================== */
/* pure virtual functions - inherited from the StochasticProcess class */
double* WienerProcess::MakeTrajectory() const {
    // 1. allocate memory in the heap to store a trajectory
    double* trajectory = new double[(*pSteps) + 1];
    // 2. calculate the time step size to use
    double stepsize = *pTimeHorizon/static_cast<double>(*pSteps);
    // 3. create a trajectory
    cout << "creating a trajectory of Wiener process for stepsize : "
    << stepsize << endl;
    for (unsigned int k=0; k < (*pSteps) + 1; ++k) {
        if (k == 0) {
            trajectory[0] = 0.0;
        }
        else {
            trajectory[k] = trajectory[k-1] +
                            stepsize*(*pMu) +
                            sqrt(stepsize) * WienerProcess::rng_vargen() *
                            (*pSigma);
        }
    }
    // return pointer to the place in memory when the trajectory starts
    return trajectory;
}

void WienerProcess::DescribeStochasticProcess() const {
    StochasticProcess::DescribeStochasticProcess();
    cout << "\tmu: " << *pMu << endl;
    cout << "\tsigma: " << *pSigma << endl;
}


/* ========================================================================== */
/* getters and setters */
double WienerProcess::GetMu() const {
    return *pMu;
}

double WienerProcess::GetSigma() const {
    return *pSigma;
}

void WienerProcess::SetMu(double mu) {
    *pMu = mu;
}

void WienerProcess::SetSigma(double sigma) {
    *pSigma = sigma;
}



/* ========================================================================== */


