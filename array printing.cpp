#include <iostream>
using namespace std;

int main()
{
	int array[10] = {0,1,2,3,4,5,6,7,8,9};
	int arrSize = sizeof(array)/sizeof(array[0]);
	
	cout << "Even One" << endl;
	for(int i=1; i<arrSize-1; i++)
	{
		if(i % 2  == 0)
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
	cout << "Odd One" << endl;
	for(int i=1; i<arrSize-1; i++)
	{
		if(i % 2  != 0)
		{
			cout << array[i] << " ";
		}
	}
	cout << endl;
	cout << "Fist One and Last One" << endl;
	cout << array[0] << " " << array[arrSize-1] << endl;
}
