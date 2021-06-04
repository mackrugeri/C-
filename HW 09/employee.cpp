#include "employee.h"

// definitions of Employee member functions
Employee::Employee(string empName, double salary_input, empType employeeType)
{
	name = empName;
	salary = salary_input;
	et = employeeType;
}

string Employee::getName()
{
	return name;
}

double Employee::getSalary()
{
	return salary;
}

empType Employee::getEmpType()
{
	return et;
}