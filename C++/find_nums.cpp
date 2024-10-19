#include <iostream>
#include <vector>

using namespace std;

vector<int> is_even();
vector<int> is_odd();

int main()
{

	cout << "Welcome!\n";
	cout << "Even numbers from 0 to 20: " << endl;
	//find_even();

	vector<int> result_even = is_even();
	vector<int> result_odd = is_odd();

	for (int num : result_even)
	{
		cout << num << " ";
	}
	cout << endl;

	cout << "\nOdd numbers from 0 to 20: " << endl;
	
	for (int num : result_odd)
	{
		cout << num << " ";
	}
	cout << endl;

	return 0;
}

vector<int> is_even()
{
	vector<int> even_nums;

	for (int num = 0; num < 20; num++)
	{
		if (num % 2 == 0)
			even_nums.push_back(num);
	}
	return even_nums;

}

vector<int> is_odd()
{
	vector<int> odd_nums;

	for (int num = 0; num <= 20; num++)
	{
		if (num % 2 >= 1)
			odd_nums.push_back(num);
	}
	return odd_nums;
}