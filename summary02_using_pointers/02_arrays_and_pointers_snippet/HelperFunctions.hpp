/* ========================================================================== */
/* Arrays' printers */
void PrintIntArray(const int* const pArray, const unsigned int ArrayLen);

void PrintDoubleArray(const double* const pArray, const unsigned ArrayLen);


/* ========================================================================== */
/* Randomizing methods */
void RandomizeDoublesArray(double* pArrayIn, const unsigned int ArrayLen);

double* RandomizeDoublesArray(double* pArrayIn, const unsigned int ArrayLen,
                              bool flag);


/* ========================================================================== */
/* heap arrays creators */
double* GenerateGaussianStandardValues(const unsigned int N);

void GenerateGaussianStandardValues(double* ArrayIn, const unsigned int N);


/* ========================================================================== */
/* template functions */
template <typename T1>
void TemplatedArrayPrinter(T1* pArray, const unsigned int ArrayLen);



