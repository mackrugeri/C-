#include <iostream>
#include <iomanip>
using namespace std;

// This program will demonstrate the scope rules.

// PLACE YOUR NAME HERE

const double PI = 3.14;
const double RATE = 0.25;

void findArea(float, float&);
void findCircumference(float, float&);

int main()
{
	cout << fixed << showpoint << setprecision(2);
	float radius = 12;

	cout << " Main function outer block" << endl;
	cout << " LIST THE IDENTIFIERS THAT are active here" << endl << endl;

	{
		float area;

		cout << "Main function first inner block" << endl;
		cout << "LIST THE IDENTIFIERS THAT are active here" << endl << endl;

		// Fill in the code to call findArea here

		cout << "The radius = " << radius << endl;
		findArea(radius,area);
		cout << "The area = " << area << endl << endl;
		cout << "==========================================" << endl;
	}

	{
		float radius = 10;
		float circumference;

		cout << "Main function second inner block" << endl;
		cout << "LIST THE IDENTIFIERS THAT are active here" << endl << endl;
		// Fill in the code to call findCircumference here

		cout << "The radius = " << radius << endl;
		findCircumference(radius,circumference);
		cout << "The circumference = " << circumference << endl << endl;
			cout << "==========================================" << endl;
	}

	return 0;
}

//	*********************************************************************
//	findArea
//
//	task:	  This function finds the area of a circle given its radius
//	data in:  radius of a circle
//	data out: answer (which alters the corresponding actual parameter)
//
//	********************************************************************

void findArea(float rad, float& answer)
{

	cout << "==========================================" << endl;
	answer = PI *  (rad*rad);

}

//	******************************************************************************
//	findCircumference
//
//	task:	  This function finds the circumference of a circle given its radius
//	data in:  radius of a circle
//	data out: distance (which alters the corresponding actual parameter)
//
//	*****************************************************************************

void findCircumference(float length, float& distance)
{
	
	cout << "==========================================" << endl;
	distance = 2 * (PI *  (length*length));

}


