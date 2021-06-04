#include <iostream>
#include <fstream>
#include "class.h"
using namespace std;



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
    int lenght = counter;
	cout << "Welcome to the CDs and DVD Menu " << endl;
	cout << "1) Sell Iteam" << endl;
	cout << "2) Restock items" << endl;
	cout << "3) add new items" << endl;
	cout << "4) Update stock" << endl;
	cout << "5) veiw report of sales" << endl;
	cout << "6) Exit" <<endl;
	for(int i=0; i<4; i++)
	{
		int a =0;
		cout << "Enter the value according to your menu" << endl;
		cin >> a;
		
		magazines t;
		int lenght = 5;
		if (a == 1)
		{
			cout << "Which iteam you want to sell "<< endl;
			for(int i =0; i< lenght; i++)
			{
				cout <<i << ") Iteam name: " << iteam_name[i] << endl;
			}
			string iteam;
			int quantities;
			cin >> iteam;
			cout << "Enter the Quantity Product you want to buy" << endl;
			cin >> quantities;
			t.sell_iteam(iteam,iteam_name,total_iteam_list,lenght,quantities,report_iteam_list);	
		}
		if (a ==2)
		{
			cout << "Which iteam you want to restock it "<< endl;
			for(int i =0; i< lenght; i++)
			{
				cout <<i << ") Iteam name: " << iteam_name[i] << endl;
			}
			string iteam;
			cin >> iteam;
			
			cout << "Enter its quantities of restocking" << endl;
			int quantities;
			cin >> quantities;
			t.iteam_restock(iteam,iteam_name,total_iteam_list,quantities,lenght);
			cout << "The iteam avaiable in stock " << total_iteam_list[0] << endl;
		}
		if( a == 3)                     //remaining 
		{
			cout << "Which iteam you want to add " << endl;
			string  iteam;
			cin >> iteam;
			int quantities;
			cout << "Enter its quantities" << endl;
			cin >> quantities;
			t.add_stock(iteam,iteam_name,total_iteam_list,quantities,lenght);
			
		}
		if(a == 4)
		{
			cout << "Which iteam you want to update "<< endl;
			for(int i =0; i< lenght; i++)
			{
				cout <<i << ") Iteam name: " << iteam_name[i] << endl;
			}
			string iteam;
			int quantities;
			cin >> iteam;
			cout << "Enter the updated quantity" << endl;
			cin >> quantities;
			t.update_stock_quanatities(iteam,iteam_name,total_iteam_list,quantities,lenght);
		}
		if(a ==5)
		{
			t.reporting(iteam_name,total_iteam_list,lenght,report_iteam_list);
		}
		if(a ==6)
		{
			cout << "Good By" << endl;
			break;
		}
	}
	
	
	
}
