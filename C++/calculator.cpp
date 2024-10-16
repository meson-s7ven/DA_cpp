#include <iostream>

using namespace std;

// function to do the calculating
double calculator(double num1, double num2, char op)
{
	switch (op)
	{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			if (num2 == 0)
				cout << "Cannot divide by zero!\n";
			else
				return num1 / num2;
			break;
		default:
			cout << "Enter valid characters!\n";
	}
}

int main()
{
	double num1;
	char op;
	double num2;


	cout << "Enter number 1:\n";
	cin >> num1;

	cout << "Enter operator (+,-,*,/)\n";
	cin >> op;

	cout << "Enter number 2:\n";
	cin >> num2;

	double result = calculator(num1, num2, op);
	cout << "The result is: " << result << endl;

	return 0;
}