#include <iostream>
#include <vector>
using namespace std;

void loops_infinite();
void loops_up_1();
void loops_down_1();
void loops_up_2();
void loops_up_2vars();
void loops_containers();

int main()
{
	cout << "Welcome to loops!" << endl;
	//for loop; while loop; do-while loop
	//loops_infinite();
	//loops_up_1();
	//loops_down_1();
	//loops_up_2();
	//loops_up_2vars();
	loops_containers();
	return 0;
}

void loops_infinite()
{
	//infinite loops
	//two kinds of infinite loops; loop forever until stopped
	//=======================================================
	const int num = 5;
	cout << "Infinite while loop with a terminating condition"
		<< endl;
	int count = 0;
	while (true)
	{
		cout << "count = " << count << endl;
		count++; //increment
		if (count > num)
			break; //exit while loop
	}
	cout << endl;

	cout << "Infinite for loop with a terminating condition"
		<< endl;
	count = 0;
	for (;;)
	{
		cout << "count = " << count << endl;
		count++; //increment
		if (count > num)
			break; //exit while loop
	}
	cout << endl;
}

void loops_up_1()
{
	const int num = 5;
	// up ==========================================
	//for loop - going up by 1 
	cout << "for loop - going up by 1" << endl;
	//init or start; final or stop; increment
	for (int count = 0; count <= num; count++)
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going up by 1 
	//initialzie; stop; increment
	cout << "while loop - going up by 1" << endl;
	int count = 0;	//start
	while (count <= num) //stop
	{
		cout << "count = " << count << endl;
		count++; //increment
	}
	cout << endl;

	//while loop - going up by 1 
	//initialzie; stop; increment
	cout << "while loop - going up by 1" << endl;
	count = 0;	//start
	do
	{
		cout << "count = " << count << endl;
		count++; //increment
	} while (count <= num); //stop
	cout << endl;
}

void loops_down_1()
{
	const int num = 5;
	// down ==========================================
	//for loop - going down by 1 
	cout << "for loop - going down by 1" << endl;
	//init or start; final or stop; increment
	for (int count = num; count >= 0; count--)
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going down by 1 
	//initialzie; stop; decrement
	cout << "while loop - going down by 1" << endl;
	int count = num;	//start
	while (count >= 0) //stop
	{
		cout << "count = " << count << endl;
		count--; //decrement
	}
	cout << endl;

	//while loop - going down by 1 
	//initialzie; stop; decrement
	cout << "while loop - going down by 1" << endl;
	count = num;	//start
	do
	{
		cout << "count = " << count << endl;
		count--; //increment
	} while (count >= 0); //stop
	cout << endl;
}

void loops_up_2()
{
	const int num = 5;
	// up ==========================================
	//for loop - going up by 1 
	cout << "for loop - going up by 2" << endl;
	//init or start; final or stop; increment
	for (int count = 0; count <= num; count += 2)
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going up by 2 
	//initialzie; stop; increment
	cout << "while loop - going up by 2" << endl;
	int count = 0;	//start
	while (count <= num) //stop
	{
		cout << "count = " << count << endl;
		count += 2; //increment
	}
	cout << endl;

	//while loop - going up by 2 
	//initialzie; stop; increment
	cout << "while loop - going up by 2" << endl;
	count = 0;	//start
	do
	{
		cout << "count = " << count << endl;
		count += 2; //increment
	} while (count <= num); //stop
	cout << endl;
}

void loops_up_2vars()
{
	const int num = 5;
	int count = 0;
	//use two variables ============================
	//simple for loop - 2 variables
	cout << "for loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	for (int i = 2, j = 3; (i < 25) && (j < 25); i += 2, j += 3)
	{
		cout << "i = " << i << ", j= " << j <<
			", i+j = " << i + j << endl;
	}
	cout << endl;

	//simple while loop - 2 variables
	cout << "while loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	int i = 2, j = 3;
	while (i < 25 && j < 25)
	{
		cout << "i = " << i << ", j= " << j <<
			", i+j = " << i + j << endl;
		i += 2;
		j += 3;
	}
	cout << endl;

	//simple while loop - 2 variables
	cout << "do-while loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	i = 2;
	j = 3;
	do
	{
		cout << "i = " << i << ", j= " << j <<
			", i+j = " << i + j << endl;
		i += 2;
		j += 3;
	} while (i < 25 && j < 25);
	cout << endl;
}


void loops_containers()
{
	const int num = 5;
	int count = 0;
	//looping in containers; vector is an example
	vector<int> a;
	for (int i = 0; i <= num; i++)
	{
		a.push_back(i * 2);
	}

	//loop like in an array
	for (int i = 0; i <= num; i++) //i is the index
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	cout << endl;

	for (auto i : a) //for every element in the container a
		//auto means the compiler will decide the type
	{
		cout << "i = " << i << endl; //i is the element
	}
}
