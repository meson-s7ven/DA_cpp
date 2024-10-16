#include <iostream>
#include <cctype> //tolower()
#include <cstdbool> //bool; true; false

using namespace std;
//function declaration
bool want_to_repeat();

int main()
{
	cout << "Welcome to cf1" << endl;
	
	while (true)
	{
		cout << "Enter a temp value followed by F or C: ";
		double temp = 0, ctemp = 0, ftemp = 0;
		char cf = ' '; 
		cin >> temp >> cf;
		cf = tolower(cf);
		if (cf == 'c')
		{
			ctemp = temp;
			ftemp = temp * 9 / 5 + 32;
		}
		else if (cf == 'f')
		{
			ftemp = temp;
			ctemp = (temp - 32) * 5 / 9;
		}
		else
		{
			cout << "invlaid char; use c or f" << endl;
			continue; //back to the beginning of while
		}

		cout << "temp " << ctemp << char(248) <<
			"C = " << ftemp << char(248) << "F" << endl;
		const char ds = char(248);
		cout << "temp " << ctemp << ds <<
			"C = " << ftemp << ds << "F" << endl;
		//=====
		if (!want_to_repeat())
			break; //exit the while loop
	}

	return 0;
}

//function definition
bool want_to_repeat()
{
	char answer = ' ';
	while (true)
	{
		cout << "Do you want to repeat (y or n)? ";

		cin >> answer;
		answer = tolower(answer);
		if (answer == 'y' || answer == 'n')
			break;
		cout << "wrong input " << endl;
	}
	return (answer == 'y');
}
