#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/chi_squared_distribution.hpp>

using namespace boost::random;

/* ************************************************************************** */
/* Functions that print stack arrays and heap arrays */

void PrintIntArray(int* ArrayIn, unsigned int ArrayLen);

void PrintDoubleArray(double* ArrayIn, unsigned int ArrayLen);

template <typename T>
void TemplatePrintArray(T* ArrayIn, unsigned int ArrayLen);


/* ************************************************************************** */
/* Functions that print elements pointed at by array of pointers */
void PrintPointersArrayObjs(int** PointersArrayIn, unsigned int ArrayLen);


/* ************************************************************************** */
/* Other simple functions */
double CalcDoubleArraySum(double* ArrayIn, unsigned int ArrayLen);



/* ************************************************************************** */
/* **********        Functions for random numbers generation     **********   */
double* CreateArrayNormalStdNumbers(double* pArrayIn, unsigned int ArrayLen,
                                    variate_generator<mt19937,
                                        normal_distribution<>> rng_gauss);

double* MakeNormalStdRandomNumbers(unsigned int ArrayLen,
                                   variate_generator<mt19937,
                                        normal_distribution<>> rng_gauss);

double* MakeChisqRandomNumbers(unsigned int ArrayLen,
                               variate_generator<mt19937,
                                    chi_squared_distribution<>> rng_chisq);
