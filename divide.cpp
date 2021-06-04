#include <iostream>
using namespace std;
// divide function to which return the int value 
int divide(int x,int y)
{
	return x/y;	
} 

 // divide function of the requrinment which generated the whole fom of the result 
int Divide(int x,int y)
{
	if(divide(x,y) >0)
	{
		if(x%y >0)
		{
			cout << divide(x,y) << " * ( "<<x%y << "/"<< y << " )" << endl;		
		}
		else
		{
			return divide(x,y);
		}
		
	}
	else
	{
		cout << x%y << "/" << y << endl;
	}
}
// n time division function 
int nDivide(int x,int y,int n)
{
	int sum =1;
//	loop to divide n time 
	for(int i=0; i<n; i++)
	{
		sum = sum *	y;
	}
	divide_whole(x,sum);
}
int divide_wholelet(int x,int y)
{
	if(divide(x,y) >0)
	{
		if(x%y >0)
		{
			cout << divide(x,y) << " * ( "<<x%y << "/"<< y << " )" << endl;		
		}
		else
		{
			return divide(x,y);
		}
		
	}
	else
	{
		cout << x%y << "/" << y << endl;
	}
}
int ndividelet(int x,int y,int n)
{
	int sum =1;
	for(int i=0; i<n; i++)
	{
		sum = sum *	y;
	}
	divide_whole(x,sum);
}

int ReadForDivide()
{
	int x=0;
	int y=0;
	int n =0;
	cout << "Enter the value" << endl;	
	cin >> x;
	cin >> y;
	cin >> n;
	ndivide(x,y,n);
}
int DividenDivide(int u,int v,int x,int y ,int n)
{
	ndivide(u,v,n);
	ndivide(x,y,n);
}
int DividenDivideLet((int u,int v,int x,int y ,int n)
{
	ndivide(u,v,n);
	ndivide(x,y,n);
}
int accumulator (int oddsum,int next)
{
	for(int i =0; i<8;i++)
	{
//		taking the input 
		cout << "Enter the value" << endl;
		cin >> x;
		if (x%2 != 0 )
		{
			oddsum = accumulator(oddsum,x);
		}
	
		
	}
//	printing the result
	cout << oddsum << endl;
}
// function 
int main()
{
	divide_whole(2,2);
	ndivide(10,3,4);
	user_ndivide();
	DividenDivide(64,2,10,3,4);
	int oddsum =0;  // sum varaiable is define
	int x =0;  // user input 
	for(int i =0; i<8;i++)
	{
//		taking the input 
		cout << "Enter the value" << endl;
		cin >> x;
		if (x%2 != 0 )
		{
			oddsum = accumulator(oddsum,x);
		}
	
		
	}
//	printing the result
	cout << oddsum << endl;
	
}


















