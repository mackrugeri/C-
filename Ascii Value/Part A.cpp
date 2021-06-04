#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main (int argc,char* argv[])
{
	string alpha[6] = {"#-#-","#-##","##--","##-#","###-","####"};		
	string numeric[10]={"----","---#","--#-","--##","-#--","-#-#","-##-","-###","#---","#--#"};
	ofstream output;
	output.open(argv[3]);
  	ifstream file(argv[1]);
  	cout << argv[3] << "  " << argv[1] << endl; 
  	string a;
  	string cat= "";
	while (std::getline(file, a)) {
		for(int i=0; i<a.length();i++)
		{
			if(int(a[i]) >=48 && int(a[i]) <= 57 )
			{
				cat = cat + numeric[int(a[i])-48];
			}
			
			else if (a[i] == '#' || a[i] =='-')	
			{
				if(a[i] == '#')
				{
					cat = cat + '-';
				}
				else
				{
					cat = cat + '#';		
				}
			}
			else
			{
				if(int(a[i])< 97)
				{
					cat = cat + alpha[int(a[i])-65];	
				}
				else
				{
					cat = cat + alpha[int(a[i])-97];	
				}
					
			}
			 
		}
		
		cout << cat << endl;
		output<< cat << endl;
		output<< endl;
		cat ="";
		
	  }
	  output.close();
}
