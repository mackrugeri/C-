#include <iostream>
#include <fstream>
using namespace std;


int main()
{
	ifstream file("File.txt");
	string part1;
	
	while(file>>part1)
	{
		if (part1 == "\n")
		{
			cout << endl;
			cout << endl;
		}
		cout << part1 << endl;
	}
	file.close();
}
