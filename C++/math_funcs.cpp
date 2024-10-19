#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void math_funcs();

int main()
{
	cout << "Hello!\n";
	math_funcs();

	return 0;
}

void math_funcs()
{

	// How to square a number
	int num = 5;
	int num_squared = pow(5, 2); // Takes two arguments. The first number is 
							     // the one being squared (5),
								 // and the second is the power (2).

	cout << num_squared << endl;

	// taking square roots
	double num2 = 144;
	double root_of_num = sqrt(144); // Takes one argument. The number 
									// to find its root.
	cout << root_of_num << endl;

	// rounding numbers
	double num3 = 18.95;
	cout << ceil(num3) << endl; // returns the smallest integer 
								// greater or equal to the input

	cout << floor(num3) << endl; // returns the smallest integer
								 // smaller than the input
	// Example Problem:
	// formula for sphere
	// V = 4/3 * PI * r^2

	double volume;
	double PI = 3.14156;
	double radius;
	double result;

	radius = 8;

	result = (4 / 3) * PI * (radius * radius);
	cout << setprecision(5) << result << endl; // setprecision(n) is a floating point
											   //number manipulator which controls the 
											   // number of decimal places displaued.

}