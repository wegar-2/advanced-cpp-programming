#include "SmallClass.hpp"
#include <cstdlib>

SmallClass::SmallClass() {}
SmallClass::~SmallClass() {}
double SmallClass::GetNumber() { return (random() % 100 + 1); }
