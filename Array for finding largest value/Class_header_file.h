#include <iostream>
using namespace std;

class array_large_finding{
	
	public:
		int int_large_finding(int *array,int size)
		{
			int largest = array[0];
			for(int i=1;i<size;i++)
			{
				if(largest < array[i])
				{
					largest = array[i];
				}
			}
			return largest;
		}
		float  float_large_finding(float *array,int size)
		{
			float largest = array[0];
			for(int i=1;i<size;i++)
			{
				if(largest < array[i])
				{
					largest = array[i];
				}
			}
			return largest;
		}
		
		int function_template()
		{
			int array[10] = {1,22,300,4,5,6,7,8,19,20};
			cout << "The largest value in int array is  " << int_large_finding(array,10) << endl;
			
			float arrays[10] = {1.0,22.2,300.3,300.4,5.5,6.6,7.7,8.8,19.9,20.2};
			cout <<  "The largest value in float array is  " <<  float_large_finding(arrays,10) << endl;

		}
};

