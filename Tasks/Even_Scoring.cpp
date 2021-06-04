#include <iostream>
using namespace std;

void swapping(int &a, int &b) {
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
		
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
int* selectionSort(int *array) {
   int i, j, imin;
   int size = 11;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
   return array;
}

float average_cal(int *array)
{
	int sum =0;
	for(int i =0; i< 11;i++)
	{
		sum = sum + array[i];
	}
	return sum/11;
}

int function(string varaiable_team_1, int *score_team_1)
{
	cout << "The team name is " << varaiable_team_1 << endl;
	for(int i =0; i<11;i++)
	{
		cout << score_team_1[i] << " ";
	}
	cout <<endl;
	cout <<endl;
}

int main()
{
//	getting data from the users

	string varaible_winning;
	int score_team_3[11] = {30,10,80,0,100,40,60,50,20,90,70};
	string varaiable_team_1 = "Sea Turtles";
	string varaiable_team_2 = "Tiger Sharks";
	string varaiable_team_3 = "The Angry Piranhas";
	
	int score_team_1[11] = {11,34,76,58,32,98,43,87,43,23,22}; 
	int score_team_2[11] = {85,55,10,99,35,5,65,75,8,95,22};
	
	
	
	int winner_team_score =0; 
	int flag_1 =0;
	int flag_2 =0;
	
	function(varaiable_team_1, score_team_1);
	function(varaiable_team_2, score_team_2);
	selectionSort(score_team_1);
	selectionSort(score_team_2);
	
	
	
	float average_score_1 = average_cal(score_team_1);
	float average_score_2 = average_cal(score_team_2);
	
	if( average_score_1 == average_score_2)
	{
		int a = score_team_1[10];
		int b = score_team_2[20];
		
		if(a > b)
		{
			winner_team_score = average_score_1;
			flag_1 = 1;
		}
		else
		{
			winner_team_score = average_score_2;
			flag_2 = 1;
		}
	}
	
	else if(average_score_1 > average_score_2)
	{
		winner_team_score = average_score_1;
		flag_1 = 1;
		
	}
	else
	{
		winner_team_score = average_score_2;
		flag_2 = 1;
	}
	
	if( flag_1 == 1)
	{
		
		cout << "Hello world" << endl;
		flag_1 =0;
		for(int i =0; i <11;i++ )
		{
			score_team_1[i] = score_team_3[i];
		}
		selectionSort(score_team_1);
		float average_score_1 = average_cal(score_team_1);
		varaiable_team_1 = varaiable_team_3;
		function(varaiable_team_1, score_team_1);
		if( average_score_1 == average_score_2)
		{
			int a = score_team_1[10];
			int b = score_team_2[20];
			
			if(a > b)
			{
				winner_team_score = average_score_1;
				varaible_winning = varaiable_team_1;
				flag_1 = 1;
			}
			else
			{
				winner_team_score = average_score_2;
				varaible_winning = varaiable_team_2;
				flag_2 = 1;
			}
		}
		
		else if(average_score_1 > average_score_2)
		{
			winner_team_score = average_score_1;
			varaible_winning = varaiable_team_1;
			flag_1 = 1;
			
		}
		else
		{
			winner_team_score = average_score_2;
			varaible_winning = varaiable_team_2;
			flag_2 = 1;
		}
	}
	else
	{
		flag_2 = 0;
		for(int i =0; i <11;i++ )
		{
			score_team_1[i] = score_team_3[i];
		}
		selectionSort(score_team_2);
		float average_score_2 = average_cal(score_team_2);
		varaiable_team_2 = varaiable_team_3;
		function(varaiable_team_2, score_team_2);
		if( average_score_1 == average_score_2)
		{
			int a = score_team_1[10];
			int b = score_team_2[20];
			
			if(a > b)
			{
				winner_team_score = average_score_1;
				varaible_winning = varaiable_team_1;
				flag_1 = 1;
			}
			else
			{
				winner_team_score = average_score_2;
				flag_2 = 1;
				varaible_winning = varaiable_team_2;
			}
		}
		
		else if(average_score_1 > average_score_2)
		{
			winner_team_score = average_score_1;
			flag_1 = 1;
			varaible_winning = varaiable_team_1;
			
		}
		else
		{
			winner_team_score = average_score_2;
			flag_2 = 1;
			varaible_winning = varaiable_team_2;
		}
		
	}
	
	cout << "The wining team is " << varaible_winning << endl;	
	
}






