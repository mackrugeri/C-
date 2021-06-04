#include <iostream>
using namespace std;

int total_charges(int num,int rate, int charges, int service)
{
	return num+ rate+ charges+ service;
}

int total_charges( int charges, int service)
{
	return charges+ service;
}


int main()
{
	
 	cout << "Should the Patiend want to admitted as an inpatient then press 1 " << endl;
	cout << "Should the Patiend want to admitted as an outpatient then press 2 " << endl;
	cout << "To quit 0" << endl;
	
	
	while(true)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			int num =0;
			int rate =0;
			int charges =0;
			int service =0;
			cout << "Enter the Number of days spent in the hospital" << endl;
			cin >> num;
			if(!cin)
			{
			    cin.clear(); // reset failbit
				cin.ignore();
			    cout << "Wrong Input" << endl;
			}
			cout << "The daily rate " << endl;
			cin >> rate;
			if(!cin)
			{
			    cin.clear(); 
			    cin.ignore();
			    cout << "Wrong Input" << endl;
			}
			cout << "Hospital Medication charges" << endl;
			cin >> charges;
			if(!cin) 
			{
			    cin.clear();
			    cin.ignore();); 
			    cout << "Wrong Input" << endl;
			}
			cout <<"Charges for Hospital Service" << endl;
			cin >> service;
			if(!cin)
			{
			    cin.clear(); 
			    cin.ignore();
			    cout << "Wrong Input" << endl;
			}
			
			cout << "The Total Charges is " << total_charges(num,rate, charges, service) << endl;
			cout << endl;
			cout << "Should the Patiend want to admitted as an inpatient then press 1 " << endl;
			cout << "Should the Patiend want to admitted as an outpatient then press 2 " << endl;
			cout << "To quit 0" << endl;
			
		}
		else if(a == 2)
		{
			int charges =0;
			int service =0;
			cout << "Hospital Medication charges" << endl;
			cin >> charges;
			cout <<"Charges for Hospital Service" << endl;
			cin >> service;
			cout << "The Total Charges is " << total_charges( charges, service) << endl;
			cout << endl;
			cout << "Should the Patiend want to admitted as an inpatient then press 1 " << endl;
			cout << "Should the Patiend want to admitted as an outpatient then press 2 " << endl;
			cout << "To quit 0" << endl;
		}
		else if (a == 0)
		{
			break;
		}
		else
		{
			cout << "Wrong input " << endl;
			
		}
	}
	

}
