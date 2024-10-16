#include <iostream>
#include "cf.h"
using namespace std;

//function declaration
double c2f(double c)
{
	double f = c * 9 / 5 + 32;
	return f;
	//return c * 9 / 5 + 32;
}

double f2c(double f)
{
	double c = (f - 32) * 5 / 9;
	return c;
	//return (f - 32) * 5 / 9;
}
