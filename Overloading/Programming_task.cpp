#include <iostream>
#include "classes.h"
#include "Multi Class Overloading.h"
using namespace std;


int main()
{
	bankAccount object_based_array[20];
	checking_Account C;
//	int account_number[20];
//	object_based_array[0].holder_name = "ahsan";

	int pressing_button = 0;
	cout << "Welcome to the Bank menu" << endl;
	cout << "Press 1 to Add the coutomer" << endl;
	cout <<  "Press 2 Print all customer data" << endl;
	cout << "Press 3 to Update customer data " << endl;
	cout << "Press 4 to exit" << endl;
	for(int i; i < 20; i++)
	{
		
		cout << "Press the button" << endl;
		cin >> pressing_button;
		
		if (pressing_button == 1)
		{
			string name= "";
			cout << "Enter the account holder name" << endl;
			cin >> name;
			object_based_array[i].set_holder_name(name);
			int bal = 0;
			cout << "Enter the balance" << endl;
			cin >> bal;
			for(int i =0; i<5;i++)
			{	
				if (C.check_default_balance(bal))
				{
					object_based_array[i].set_balance(bal);
				}
				else
				{
					cout << "Minmium balance is less then $5" << endl;
				}
			}
			int interest = 0;
			cout << "Enter the interest rate" << endl;
			cin >> interest;
			object_based_array[i].set_interest_rate(interest);
			cout << "Your account number s No: " << i << endl;
			object_based_array[i].set_number(i);
		}
		else if (pressing_button ==2)
		{
			for(int j=0 ; j<i; j++)
			{	
			cout << object_based_array[j].get_holder_name() << endl;
			cout << object_based_array[j].get_balance() << endl;		
			cout << object_based_array[j].get_interest_rate() << endl;		
			cout <<  object_based_array[j].get_number() << endl;			
			}
		}
		else if (pressing_button == 3)
		{
			
			for (int k =0; k< 20; i++)
			{
				
				for(int j=0 ; j< i; j++)
				{
					cout << j << " No account holder " <<  object_based_array[j].get_holder_name() << endl; 
				}
				int selection =0;
				cout << "Select the account holder number " << endl;
				cin >> selection;
				int pressing_button_2 =0;
				cout << "Bank_account_request" << endl;
				cout << "Press 1 to deposit" << endl;
				cout <<  "Press 2 to withdrawal" << endl;
				cout << "Press 3 to print balance" << endl;
				cout << "Press 4 to update balance with interest" << endl;
				cout << "Press 5 to exist" << endl;
				cout << "Enter press the sub button" << endl;
				cin >> pressing_button_2;
				
				if ( pressing_button_2 == 1)
				{	
					int depost=0;
					cout << "Enter the amount which you want to deposit" << endl;
					cin >> depost; 
					object_based_array[selection].deposit_amount(depost);
				}
				else if ( pressing_button_2 == 2)
				{
					int withdraw=0;
					cout << "Enter the amount which you want to withdraw" << endl;
					cin >> withdraw; 
					object_based_array[selection].withdraw_amount(withdraw);
				}
				else if ( pressing_button_2 == 3)
				{
					
					cout << "You balance is" << object_based_array[selection].get_balance() << endl;
				}			
				else if ( pressing_button_2 == 4)
				{
					int interest=0;
					cout << "Enter the amount for interest" << endl;
					cin >> interest; 
					object_based_array[selection].interest_rate_amount(interest);
				}
				
				else if ( pressing_button_2 ==5)
				{
					cout << "Exitted form submenu" << endl;
					break;
				}
				else
				{
					cout << "Wrong inputs" << endl;
					
				}
			
			}
			
		}
		else if (pressing_button == 4)
		{
			cout << "Exitted" << endl;
			break;
		}	
		else
		{
			cout << "Wrong inputs" << endl;
			cout << "Welcome to the Bank menu" << endl;
			cout << "Press 1 to Add the coutomer" << endl;
			cout <<  "Press 2 Print all customer data" << endl;
			cout << "Press 3 to Update customer data " << endl;
			cout << "Press 4 to exit" << endl;
		}
	}
	

}

















