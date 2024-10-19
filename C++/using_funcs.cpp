#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Student		
{
public:					
	int stud_age;			
	string stud_first_name;
};

int main()
{
	cout << "Welcome\n";

	// creating an object
	Student stud1;

	stud1.stud_age = 19;
	stud1.stud_first_name = "Jonny";

	cout << "Student info: \n";
	cout << "\tAge and First Name\n";
	cout << "\t" << stud1.stud_age << " ";
	cout << "\t" << stud1.stud_first_name;

	return 0;
}