#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;


int guessNumber()
{
	while(true)
	{
		cout << "Make a guessed between 0 to 99" << endl;
		int guessed;
		
		cin >> guessed;
		if(!cin)
		{
		    cin.clear(); 
			cin.ignore();
		    cout << "Wrong Input" << endl;
		}
		
		else if(guessed >=0 && guessed <= 99)
		{
			cout << "Ok" << endl;
			return guessed;
		}
		else
		{
			cout << "Wrong input" << endl;
		}
	}

}

int digit_Matches(int computer_generated, int Guess_one)
{
	stringstream ss ;
	ss << computer_generated ;
	string str_gen ;
	ss >> str_gen;
	
	stringstream s ;
	s << Guess_one ;
	string str_gus ;
	s >> str_gus;  	
	
	int match =0;
	for (int i=0; i< str_gen.length();i++)
	{
		for(int j=0; j < str_gus.length(); j++)
		{
			if(str_gen[i] == str_gus[j])
			{
				match++;
			}
		 } 
	}
	return match;
}


void print_intro()
{
	cout << "Welcome to the game" << endl;
	cout << "Introduction to the game" << endl;
	
	cout << "You have to guess a number from 0 to 99" << endl;
	cout << "The system will tell you the how many of those digits from the guess appear in its secret number" << endl;
}

int getInt(string a)
{
	stringstream degree(a);

    int x = 0;
    degree >> x;
    return x;
}

int main()
{
	int turn;
	print_intro();
	int computer_generated =rand() % 100;
	cout << computer_generated;
	
	while(true)
	{
		
		int guess = guessNumber();
		int match = digit_Matches(computer_generated, guess);
		
		if (computer_generated != guess)
		{
			cout << "Incorrect (hint: " << match << " digits match)" << endl;
		}
		else
		{
			cout << "Congratulations! You took "<< turn<< " guesses." << endl;
			break;
		}
		turn++;
	}
	
}









