/* 
	Name: Write you name as it is mentioned in you detail
	Date: 23-02-2020
*/


#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

	//constructor
personType::personType(string first, string last) 
{ 
    firstName = first;
    lastName = last;
}

class patientType : public personType
{
	private:
		string Patient_ID;
		int Patient_age;
	    string Date_of_Brith;
	    string Date_of_admitted;
	    string Date_of_discharge;
	public:
		patientType()
		{
			Patient_ID = "";
			Patient_age =0;
			Date_of_Brith = "";
			Date_of_admitted = "";
			Date_of_discharge = "";
		}
		void Printing_string()
		{
			cout << "Hello world" << endl;
		}
		
//		Setting all the values
		void set_Patient_ID(string Id)
		{
			Patient_ID = Id;	
		}
		void set_age(int age)
		{
			Patient_age =	age;
		}
		void set_Date_Brith(string Brith)
		{
			Date_of_Brith = Brith;
		}
		void Set_Date_of_admitted(string admitted)
		{
			Date_of_admitted =	admitted;
		}
		void set_Date_of_discharge(string discharge)
		{
			Date_of_discharge =discharge;
		}
		
//		Getting all the values

		string get_Patient_ID()
		{
			return Patient_ID;	
		}
		int get_age()
		{
			return Patient_age;
		}
		string get_Date_Brith()
		{
			return Date_of_Brith;
		}
		string get_Date_of_admitted()
		{
			return Date_of_admitted;
		}
		string get_Date_of_discharge()
		{
			return Date_of_discharge;
		}	
};

int main()
{
	
//	 Tested 
	patientType P;    // object creation 
	
//	Setting the values in the object appropriately
	P.set_Patient_ID("P1234");
	P.setName("Ahsan","Chughtai");
	P.set_age(12);
	P.set_Date_Brith("08-12-199");
	P.Set_Date_of_admitted("02-02-2021");
	P.set_Date_of_discharge("05-02-2021");
	
//  Getting the values in the object appropriately	
	cout <<"Patient First name is " <<P.getFirstName() << endl;
	cout <<"Patient Last name is "<<P.getLastName() << endl;
	cout <<"Patient ID is " << P.get_Patient_ID() << endl;
	cout <<"Patient Age is " << P.get_age() << endl;
	cout <<"Patient Date of Brith is " <<  P.get_Date_Brith() << endl;
	cout << "Patient Date of admission at " <<  P.get_Date_of_admitted() << endl;
	cout << "Patient Date of admission at " << P.get_Date_of_discharge() << endl;
	
}








