#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void w_function(string *iteam_name)
{
   ofstream fout;
   ifstream fin;
      fin.open("writefile.txt");
      fout.open ("writefile.txt",ios::app);
   if(fin.is_open())
      cout<<"\n Data has been appended to file"<<endl;
      
      for(int i=0;i<5;i++)
      {
      	fout << iteam_name[i] << " " << i << endl;;
	  }
      fin.close();
      fout.close();
      string word;
}

int main()
{
    ifstream file( "readingFile.txt", ios::in );
	string part1;
    int num1;
    if( !file )
        cerr << "Cant open " << endl;
	int counter =0;
    while( file >> part1 >> num1 )
    {
        counter = counter +1;
    }
    file.close();
    
    ifstream file1( "readingFile.txt", ios::in );
    part1 = "";
    num1 =0;
    
    string iteam_name[counter];
	int report_iteam_list[counter];
	int total_iteam_list[counter];
	counter =0;
    if( !file1 )
        cerr << "Cant open " << endl;
    while( file1 >> part1 >> num1 )
    {
       iteam_name[counter] = part1;
       report_iteam_list[counter] = 0;
       total_iteam_list[counter] = num1;
	   counter++; 
    }
    file1.close();
//    for(int i =0; i<counter;i++)
//    {
//    	cout << iteam_name[i] << endl;
//	}
    
    w_function(iteam_name);
    
}
