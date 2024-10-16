#include <iostream>
#include <stack>

using namespace std;

// A stack in C++ acts in a LIFO (Last In First Out) way. 
// Like a stack of plates, the plate at the top is the one you grab
// instead of trying to get the one all the way at the bottom.

// to add an element to a stack you use:
// stack_name.push("element name) or stack_name.emplace("element name)

// to remove an element from a stack type:
// stack_name.pop(), this will remove only the most top element,
// the same is with .emplace() or .push(),
// this will add an element to the top

int main()
{

	cout << "Hello, World!\n";

	// creating a stack
	// stack<type> name_of_stack;
	// for example:
	stack<string> my_stack;

	my_stack.emplace("Berries\n");
	my_stack.emplace("Apples\n");
	my_stack.emplace("Mangos\n");
	my_stack.emplace("Cherries\n");


	// prints out the most top element
	cout << my_stack.top();

	// remove the top element
	my_stack.pop();
	cout << my_stack.top();

	// to check if a stack is empty type:
	// stack_name.empty()
	// if it is, it'll return 1

	if (my_stack.empty())
		cout << "Stack is empty\n";
	else
		cout << "Elements in stack\n";

	// check for size of stack
	cout << my_stack.size();



	return 0;
}