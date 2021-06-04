#include <iostream>
using namespace std;

class bankAccount{
	private:
		
		string holder_name;
		int balance;
		int number;
		int interest_rate;
		
	
	public:
		bankAccount()
			{
				holder_name = "";
				balance = 0;
				interest_rate = 0;
			}
		void set_holder_name(string name)
			{
				holder_name = name;
			}
		string get_holder_name()
			{
				return holder_name;
			}
		void set_number(int num)
			{
				number = num;
			}
		int  get_number()
			{
				return number;
			}
		void set_balance(int bal)
			{
				balance = bal;
			}
		int  get_balance()
			{
				return balance;
			}
		void set_interest_rate(int rate)
			{
				interest_rate = rate;
			}
		int get_interest_rate()
			{
				return interest_rate;
			}
		
		
		void deposit_amount(int amount)
		{
			balance = balance +amount;
		}
		void withdraw_amount(int amount)
		{
			if ( balance != 0)
			{
				balance = balance - amount;
			}
			else
			{
				cout << "no balance " << endl;
			}	
		}
		void interest_rate_amount(int rate)
		{
			rate = balance*(rate/100);
			balance = balance +rate;
		}
		void printing_data()
		{
			cout << "Account Holder Name " << holder_name<< endl;
			cout << "Account Number" << number<<endl;
			cout << "Balance" <<balance << endl;
			cout << "interest_rate" << interest_rate << endl;	
		}
		bankAccount operator+(const bankAccount c1)
		{
			bankAccount temp;
			temp.balance = balance + 100;
			return temp;
		}
	
};

