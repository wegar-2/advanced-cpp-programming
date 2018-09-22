#include <iostream>
#include "StochasticProcess.hpp"
#include "WienerProcess.hpp"


using std::endl;
using std::cout;

void PrintTrajectory(double* trajectory, unsigned int steps);

int main()
{
    // 1.
    WienerProcess proc1 = WienerProcess(10, 100, 0, 1);
    StochasticProcess* pProcess = new WienerProcess(10, 100, 0.0, 3.0);
    cout << pProcess->GetStepsNumber() << endl;
    cout << pProcess->GetTimeHorizon() << endl;
    // 2.
    cout << "proc1..." << endl;
    cout << proc1.GetMu();
    cout << proc1.GetSigma();
    unsigned int stepsnum = proc1.GetStepsNumber();
    double* pTrajectory = proc1.MakeTrajectory();
    PrintTrajectory(pTrajectory, stepsnum);
    return 0;
}

/* ========================================================================== */
/* friend function of the class */
void PrintTrajectory(double* trajectory, unsigned int steps) {
    cout << "\n\n\n" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout << "Printing a trajectory: " << endl;
    for (unsigned int k=0; k<steps; ++k) {
        cout << "\ttraj[" << k << "]=" << trajectory[k] << endl;
    }
    cout << "---------------------------------------------------------" << endl;
    cout << "\n" << endl;
}
