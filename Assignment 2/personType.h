/* 
	Name: Write you name as it is mentioned in you detail
	Date: 23-02-2020
*/


#ifndef H_personType
#define H_personType

#include <string>
 
using namespace std;

class personType
{
public:
    void print() const;
       //Function to output the first name and last name
       //in the form firstName lastName.
  
    void setName(string first, string last);

    string getFirstName() const;
       //Function to return the first name.
       //Postcondition: The value of the data member firstName
	   //               is returned.

    string getLastName() const;
       //Function to return the last name.
       //Postcondition: The value of the data member lastName
	   //               is returned.

    personType(string first = "", string last = "");
       //constructor
       //Sets firstName and lastName according to the parameters.
       //The default values of the parameters are empty strings.
       //Postcondition: firstName = first; lastName = last  

 private:
    string firstName; //variable to store the first name
    string lastName;  //variable to store the last name
};

#endif

