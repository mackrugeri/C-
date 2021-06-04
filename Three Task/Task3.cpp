#include <iostream>
using namespace std;

int characters_long()
{
	cout << "To quit enter 1 " << endl;
	int character = 0;
	string space = "";
	string cat = "";
	while(true)
	{
		cout << "Enter the Word" << endl;
		string word;
		cin >> word;
		if(word == "1")
		{
			break;
		}
		character = character + word.length();
		character = character + space.length();
		
		
		
		cat = cat + space + word;
		space = "  ";
		if(character >= 40)
		{
			cat = cat + "\n";
			cout << "Hello" << endl;
			
		}
		
		
	}
	cout << cat << endl;
}
int main()
{
	characters_long();
}
