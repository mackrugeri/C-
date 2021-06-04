#include "technical.h"

// Q2b: Define displayEmployee() for Technical class (5 points)
// Define the function displayEmployee() that you declared within the Technical class in the header file
// See expected output in question file.

technical::technical(string empName, double salary, empType employeeType){
	cout << "I am running" << endl;	
}
technical::displayEmployee()
{
	string Name = technical::getName();
	string Salary  = technical::getSalary();
	string type = technical::getEmpType();
	
	cout << "Name of Employee is " << Name << " Its Salary is " << Salary << " and its type is " << type <<endl;
  }

// (displayList() function in hw9.cpp should call this function.)
// Include necessary header files
