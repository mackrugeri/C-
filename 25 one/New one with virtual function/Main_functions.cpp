#include <iostream>
using namespace std;

class PersonType{    // Treated as base class 
	
	private:
		string address;
	public:
		virtual string getAddress()
		{
			return address; 
		}
		virtual void setAddress(string add)
		{
			address = add;
		}
};
class StudentType: public PersonType
{
	private:
		string firstName;
		string lastName;
		string major;
		int ids;
		float gpas;
		string address;
		
	public:
		StudentType()  // DEFAULT constructor
		{
			firstName = "First_Name";
			lastName = "Last_Name";
			major = "Major";
			ids = 1992;
			gpas = 3.2;
			address = "XYZ street";
		}
		StudentType(string first,string last,string maj,int id,float gpa,string add)   //OVERLOADED constructor
		{
			firstName = first;
			lastName = last;
			major = maj;
			ids = id;
			gpas = gpa;
			address = add;
		}
		void setfirstName(string first)
		{
			firstName = first;
		}
		void setlastName(string last)
		{
			lastName = last;
		}
		void setmajor(string maj)
		{
			major = maj;
		}
		void setid(int id)
		{
			ids = id;
		}
		void setGpa(float gpa)
		{
			gpas = gpa;
		}
		void setAddress(string add)
		{
			address = add;
		}
		string getmajor()
		{
			return major;
		}
		int getid()
		{
			return ids;
		}
		float getGpa()
		{
			return gpas;
		}
		string getAddress()
		{
			return address;
		}
		string getfirstName()
		{
			return firstName;
		}
		string getlastName()
		{
			return lastName;
		}
};

int main()
{
	cout << "=========================Calling from the defult constructor=================" << endl;
	StudentType ST;
	StudentType STC("FirstName","FastName","Major",123,3.2,"XYZ street abc city");
	
	cout << ST.getfirstName() << endl;
	cout << ST.getlastName() << endl;
	cout << ST.getmajor() << endl;
	cout << ST.getid() << endl;
	cout << ST.getGpa() << endl;
	cout << ST.getAddress() << endl;
	
	cout << "============== Calling from the overloaded constructor =====================" << endl;
	cout << STC.getfirstName() << endl;
	cout << STC.getlastName() << endl;
	cout << STC.getmajor() << endl;
	cout << STC.getid() << endl;
	cout << STC.getGpa() << endl;
	cout << STC.getAddress() << endl;
	
}





