#include <iostream>
using namespace std;

int smaller_number(int arr[],int m)
{
	int small=arr[0];
	int index = 0;
        for(int j=0; j<m; j++)
        {
                if(small>arr[j])
                {
                        small=arr[j];
                        index = j;
                }
        }
       	
        cout<<"Smallest Element in Arrassssssssy = "<<small<<endl;
        cout << "Index " << index << endl;
        return index;
} 

int main()
{
	int gameWon[100];
	for(int i =0; i< 100; i++)
	{
		gameWon[i] = -100;
	}
	
	int i =0;
	for(;;)
	{
		cout << "If you want to enter the score press 1" << endl;
		cout << "If you want to quit then press Q" << endl;
		
		string a ="";
		cin >> a;
		if(a == "1")
		{
			cout << "Enter the score "<< endl;
			int b = 0;
			cin >> b;
			gameWon[i] = b;
			i++;
		}
		else if(a == "q")
		{
			break;
		}
		else
		{
			cout << "Wrong input " << endl;
		}
	}
	int sum =0;
	cout << i << endl;
	for(int k=0; k<i; k++)
	{
		sum = sum + gameWon[k];
	}
	cout << "The Average number is " << sum/i << endl;
	
	int a = smaller_number(gameWon,i);
	
	int temp = gameWon[0];
	gameWon[0] = gameWon[a];
	gameWon[a] = temp;
	
	cout << "After Swapping" << endl;
	cout << "Data At zero index " << gameWon[0] << endl;
	cout << "Data at small value index " << gameWon[a] << endl;
 	
}
