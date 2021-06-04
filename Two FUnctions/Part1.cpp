#include <iostream>
#include <stdlib.h>  
#include <iomanip>
using namespace std;

int function()
{
	int row = 4;
	int columns = 5;
	int values[row][columns];
	int v2=0;
//	Part 1 random number in the range 1-1000
	for(int i =0; i<row;i++)
	{
		for(int j=0; j<columns;j++)
		{
			v2 = rand() % 1000 + 1; 
			values[i][j] = v2;	
		
		}
	}
//	computing the sum and average of all the elements
	int sum=0;
	for(int i =0; i<row;i++)
	{
		for(int j=0; j<columns;j++)
		{
			sum = sum + values[i][j];
		}
	}
	cout << "The sum is " << sum << endl;
	cout << endl;
	cout <<"The Average is " <<sum/(row*columns) << endl;
	
	
//	finding and printing the largest element in the array 	
	int min = values[0][0];
	for(int i =0; i<row;i++)
	{
		for(int j=0; j<columns;j++)
		{
			if(values[i][j] < min)
			{
				min = values[i][j];
			}
		}
	}
	cout << endl;
	cout <<"The min value is " << min << endl;
	
//	finding and printing the smallest element in the array
	int max = values[0][0];
	for(int i =0; i<row;i++)
	{
		for(int j=0; j<columns;j++)
		{
			if(values[i][j] < min)
			{
				max = values[i][j];
			}
		}
	}
	cout << endl;
	cout <<"The min value is " << max << endl;
	
	cout << endl;
	
//	printing the array elements in a table form with each line representing a row
	cout << "Table" << endl;
	cout << endl;
	
	for(int i =0; i<row;i++)
	{
		for(int j=0; j<columns;j++)
		{
			cout << setw(5);
			cout << values[i][j] << " ";
		}
		cout << endl;
	}
	
}
int main()
{
	function();
}
