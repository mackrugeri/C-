#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// PLACE YOUR NAME HERE

// Prototypes of the functions
void convertMulti(float dollars, float& euros, float& pesos);
void convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

int main()
{
	float dollars;
	float euros;
	float pesos;
	float yen;
	cout << endl;

	cout << fixed << showpoint << setprecision(2);

 	cout << endl;
 	
	cout << "Please input the amount of American Dollars you want converted "
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;
	
	cout << "================================================= " << endl;
	 convertMulti( dollars, euros, pesos);
	 
	 cout << "The convert euros is " << euros << endl;
	 cout << "The convert pesos is " << pesos << endl;
	 cout << "================================================= " << endl;

	// Fill in the code to call convertMulti with parameters dollars, euros, and pesos

	// Fill in the code to output the value of those dollars converted to both euros
	// and pesos

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;
	
	cout << "================================================= " << endl;
	convertMulti( dollars,  euros,  pesos, yen);
	cout << "The converted euros is " << euros << endl;
    cout << "The converted pesos is " << pesos << endl;
	cout << "The converted yen is " << yen << endl;
	cout << "================================================= " << endl;
	// Fill in the code to call convertMulti with parameters dollars, euros, pesos and yen

	// Fill in the code to output the value of those dollars converted to euros,
	// pesos and yen


	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" << endl;
	cin >> dollars;
	cout << "================================================= " << endl;
	cout << "The converted yen is " << convertToYen( dollars) << endl;
	cout << "================================================= " << endl;

	// Fill in the code to call convertToYen

	// Fill in the code to output the value of those dollars converted to yen

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin >> dollars;
	cout << "================================================= " << endl;
	cout << "The converted Euros is " << convertToEuros( dollars) << endl;
	cout << "================================================= " << endl;

	// Fill in the code to call convert ToEuros

	// Fill in the code to output the value of those dollars converted to euros

	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	cout << "================================================== " << endl;
	cout << "The converted Pesos is " << convertToPesos( dollars) << endl;
	cout << "================================================== " << endl;

	// Fill in the code to call convertToPesos

	// Fill in the code to output the value of those dollars converted to pesos

	return 0;
}

// All of the functions are stubs that just serve to test the functions
// Replace with code that will cause the functions to execute properly

//	**************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          and pesos
//	data in:  dollars
//	data out: euros and pesos
//
//	*************************************************************************

void convertMulti(float dollars, float& euros, float& pesos)
{
	cout << "The function convertMulti with dollars, euros and pesos "
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
		 euros = dollars * 0.82225;
		 pesos = dollars * 19.90;	
}

//	************************************************************************
//	convertMulti
//
//	task:	  This function takes a dollar value and converts it to euros
//	          pesos and yen
//	data in:  dollars
//	data out: euros pesos yen
//
//	***********************************************************************

void convertMulti(float dollars, float& euros, float& pesos, float& yen)
{
	cout << "The function convertMulti with dollars, euros, pesos and yen"
		 << endl << " was called with " << dollars << " dollars" << endl << endl;
		 
		 euros = dollars * 0.82225;
		 pesos = dollars * 19.90;
		 yen = dollars * 108.57;
}

//	****************************************************************************
//	convertToYen
//
//	task:	       This function takes a dollar value and converts it to yen
//	data in:	   dollars
//	data returned: yen
//
//	***************************************************************************

float convertToYen(float dollars)
{
	cout << "The function convertToYen was called with " << dollars << " dollars"
		 << endl << endl;
		 
	 float yen = dollars * 108.57;

	return yen;
}

//	****************************************************************************
//	convertToEuros
//
//	task:	       This function takes a dollar value and converts it to euros
//	data in:	   dollars
//	data returned: euros
//
//	****************************************************************************

float convertToEuros(float dollars)
{
	cout << "The function convertToEuros was called with " << dollars
		 << " dollars" << endl << endl;
		 
	float  euro = dollars * 0.82225;

	return euro;
}

//	*****************************************************************************
//	convertToPesos
//
//	task:	       This function takes a dollar value and converts it to pesos
//	data in:	   dollars
//	data returned: pesos
//
//	****************************************************************************

float convertToPesos(float dollars)
{
	cout << "The function convertToPesos was called with " << dollars
		 << " dollars" << endl;
	float pesos = dollars * 19.90;
	return pesos;
}


