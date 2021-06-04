#include <iostream>
using namespace std;

int general_method(int n)
{
	int a =0;
	a =n;
	return a;
}
int question_C_4()
{
	int i=10;
	int j=4;
	int n=0;
	int a =0;
	
	while(i>j)
	{
		if(i%j ==0)
		{
			a = general_method(n);	
		}
		i--;
		n++;
	}
	n =a;
	cout << n << endl;
}
int question_B_4()
{
	int i=10;
	int j=4;
	int n=0;
	int a =0;
	
	while(i>j)
	{
		if(i%j ==0)
		{
			a =n;	
		}
		i--;
		n++;
	}
	n=a;
	cout << n << endl;
}
int main()
{
	question_B_4();
	question_C_4();
}
