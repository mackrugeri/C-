#include <iostream>
#include "classes.h"
using namespace std;


class checking_Account: public bankAccount{
	
	private:
		int min_balance;
		int monthly_charges;
	
	public:
	checking_Account()
	{
		min_balance = 5;
		monthly_charges = -1;
	}
	bool check_default_balance(int amount)
	{
		if(amount >= min_balance)
		{
			return true;
		}
		return false;
	}
	int monthly_service_charge()
	{
		return monthly_charges;
	}
	void set_min_balance (int min)
	{
		min_balance = min;
	}
	int get_min_balance()
	{
		return min_balance;
	}
	void set_monthly_service_charge(int charges)
	{
		monthly_charges = charges;
	}
	int get_monthly_service_charge()
	{
		return monthly_charges;
	}
	
	void withdraw_amount(int amount)
	{
		int monthly_service = get_monthly_service_charge();
		int min_charges = get_min_balance();
		
		int var = monthly_service - min_charges - amount;
		if (var > 0)
		{
			cout << "You have not that much balance" << endl;
		}
		else
		{
			set_balance(get_balance()-amount);
		}
	}
	
	friend ostream &operator << (ostream &output,checking_Account &p);
	
};

ostream &operator << (ostream &output,checking_Account &p)
{
	output << p.get_holder_name() << endl;
	output << p.get_balance() << endl;		
	output << p.get_interest_rate() << endl;		
	output << p.get_number() << endl;
}













