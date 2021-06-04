#include <iostream>
#include <stdlib.h> 
using namespace std;


int generateNumbers(int *lottery,int length)
{
	for(int i =0; i<length;i++)
	{
		lottery[i] = rand() % 9;
	}
}

int digit_matches(int *lottery,int *user,int length)
{
	int match = 0;
	for(int i=0; i< length;i++)
	{
		if(lottery[i] == user[i])
		{
			match++;
		}
	}
	return match;
	
}

int display(int *lottery,int *user,int length)
{
	cout << "Lottery Digits:  ";
	for(int i =0; i<length;i++)
	{
		cout << lottery[i] << " ";
	}
	cout << endl;
	cout << "User Digits:  "; 
	for(int i =0; i<length;i++)
	{
		cout << user[i] << " ";
	}
	cout << endl;
	
}
int get_user_numbers(int *user,int length)
{
	for(int i=0; i<length;i++)
	{
		cout << "Enter the number " << i+1 << endl;
		cin >> user[i];
	}
}
int main()
{
	const int LENGTH = 5;
	int lottery[LENGTH] = { };
	int user[LENGTH] = { };
	
	generateNumbers(lottery, LENGTH);
	get_user_numbers(user, LENGTH);
	
	int matches = digit_matches(lottery, user, LENGTH);
	cout << endl << endl;
	
	display(lottery, user, LENGTH);
	
	//Print the number of digit matches
	cout << "The count of digit matches is " << matches << endl;
	//If the digit matches is 5, announce that the user is a grand prize winner.
	if (matches == 5)
	{
	 cout << "Congratulations! all your digits matched. You are a grand prize winner!\n";
	}


}
