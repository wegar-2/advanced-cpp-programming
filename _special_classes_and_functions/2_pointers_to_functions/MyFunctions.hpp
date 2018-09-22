#include <string>

/* -------------------------------------------------------------------------- */
/* various functions */
void DisplayIntsArray(int* array_in, unsigned int array_len,
                      std::string array_name);

void DisplayArrayOfIntsPointers(unsigned int** array_of_pointers,
                                unsigned int array_len);

void DisplayHeapArrayElements(int* heap_array, unsigned int array_len);


/* -------------------------------------------------------------------------- */
/* statistics-related functions */
double SumArrayElements(double array_in[], unsigned int array_len);

double AverageOfArrayElements(double array_in[], unsigned int array_len);

double SumOfSquaredArrayElements(double array_in[], unsigned int array_len);

double StandardDeviationOfArrayElements(double array_in[],
                                        unsigned int array_len);


/* -------------------------------------------------------------------------- */
/* pointers-to-functions-related functions*/
void StatFunctionWrapper(double (*pFunction)(double*, unsigned int),
                         std::string* function_name,
                         double array_in[], unsigned int array_len);
