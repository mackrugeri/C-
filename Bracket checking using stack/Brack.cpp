#include <iostream>
#include <string.h>
#include "Bracket.h"
using namespace std;


int main()
{

    string s1 = "{{[[((8+9)*0)]]}}";
    string s2 = "{[(])}";
    string a = "";
    
    for(int i =0; i<s1.length();i++)
    {
    	if(s1[i] == '{' || s1[i] == '[' || s1[i] == '(' || s1[i] == ')' || s1[i] == ']' ||s1[i] == '}' )
    	{
    		a = a + s1[i];
		}
	}
	s1 = a;
	Stack S;
    bool b1 = S.isBalanced(s1);
	
    if (b1)
    {
        cout << "The Expression is Balanced.\n\n";
    }
    else
    {
        cout << "The Expression is not Balanced.\n\n";
    }



    return 0;
}
