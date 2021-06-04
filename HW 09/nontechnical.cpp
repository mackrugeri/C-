#include "nontechnical.h"
// Q2a: Define displayEmployee() for Nontechnical class (5 points)
// Define the function displayEmployee() that you declared within the Nontechnical class in the header file
// See expected output in question file.
nontechnical::nontechnical(){
	cout << "I am running" << endl;	
}
nontechnical::displayEmployee()
{
	string Name =   nontechnical::getName();
	string Salary = nontechnical::getSalary();
	string type = 	nontechnical::getEmpType();
	
	cout << "Name of Employee is " << Name << " Its Salary is " << Salary << " and its type is " << type <<endl;
  }

// (displayList() function in hw9.cpp should call this function.)
// Include necessary header files

