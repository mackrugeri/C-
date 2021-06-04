#include <iostream>
using namespace std;

int Question_3()
{
//	Part 1 
	int array_length =10;
	if(array_length >=2)
	{
		int array[10];
		for(int i =0; i<array_length;i++)
		{
			array[i] = i;
		}
	}
	else
	{
		cout << "Wrong Input" << endl;
	}
	
//	part 2
	int array[6] ={2,4,6,8,10,12};
	int var =0;
	for(int i=0; i<6;i++)
	{
		var = array[i];
	}
	cout << "Here is your last element of the array " << var << endl;
	
//	Part 3
	int arr[4] = {1,2,3,4};
	int arr2[3] = {5,7,8};
	int len1 = sizeof(arr)/sizeof(arr[0]);
	int len2 = sizeof(arr2)/sizeof(arr2[0]);
	
	int arrs[len1 + len2];
	for(int i=0; i<len1+len2; i++)
	{
		if(i <len1)
		{
			arrs[i] = arr[i];	
		}
		else
		{
			arr2[i] = arr[i];	
		}
	}
//	part 4
	string arra[6]= {"a","b","x","y","10","12"};
	cout << "The length of the array is "<< sizeof(array)/sizeof(array[0]);
	
	

}



