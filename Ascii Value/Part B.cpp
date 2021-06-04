#include <iostream>
#include <fstream>
using namespace std;

int main(int argc,char* argv[])
{
string alpha[6] = {"#-#-","#-##","##--","##-#","###-","####"};		
	string numeric[10]={"----","---#","--#-","--##","-#--","-#-#","-##-","-###","#---","#--#"};
	
	cout << argv[3] << "  " << argv[1] << endl;
	ofstream output;
	output.open(argv[3]);
  	ifstream file(argv[1]);
  	string a;
  	string cat= "";
	while (std::getline(file, a)) {
		for(int i=0; i<a.length();i++)
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
		output<< cat << endl;
		output<< endl;
		cat ="";
		
	  }
	  output.close();
}
