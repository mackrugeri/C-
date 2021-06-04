#include <iostream>
using namespace std;

int function()
{
	return (3*8+10);
}

int function2()
{
	return (20-5);
}

int main()
{
	cout << "Hello world" << endl;
	cout << "\n" << endl;
	string expression = "(+ (* 3 8) 10))";
	cout << function() << endl;
	cout << function2() << endl;
}








