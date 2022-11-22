
#include <vector>
#include <string>
using namespace std;

#ifndef ADVANCED_PROGRAMMING_1_FUNCTION_H
#define ADVANCED_PROGRAMMING_1_FUNCTION_H

vector <float> check(string input_str, vector <float>& numbers);

// helper Functions:
vector <float> vectorSubstruction(vector <float> v1, vector <float> v2);
vector <float> vectorRaiseToPower(vector <float> vector, double toThePowerOf = 2);
float vectorSquareRoot(vector <float> vector);
vector <float> vectorAbsolute(vector <float> vector);
float vectorSum(vector <float> vector);
vector <float> vectorAddition(vector <float> v1, vector <float> v2);

// distance functions:
float euclideanDistance(vector <float> v1, vector <float> v2);
float minkowskiDistance(vector <float> v1, vector <float> v2);

#endif //ADVANCED_PROGRAMMING_1_FUNCTION_H
