#include "HelperFunctions.hpp"
#include <iostream>
#include <boost/random/variate_generator.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/normal_distribution.hpp>
#include <boost/random/uniform_01.hpp>

double GetMeStandardizedNormal() {
    boost::random::mt19937 mt = boost::random::mt19937();
    boost::random::normal_distribution<> unif01 =
                                boost::random::normal_distribution<>();
    boost::random::variate_generator<boost::random::mt19937,
                                     boost::random::normal_distribution<>>
                                     U(mt, unif01);
    return(U());
}


double GetMeUniform01() {
    boost::random::mt19937 mt = boost::random::mt19937();
    boost::random::uniform_01<> unif_dist = boost::random::uniform_01<>();
    boost::random::variate_generator<boost::random::mt19937,
                                boost::random::uniform_01<>> U01(mt, unif_dist);
    return(U01());
}
