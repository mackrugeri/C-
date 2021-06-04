#include <iostream>
#include <stdexcept>
#include <limits>
using namespace std;

int conversion_into_centimeter()
{
	
		cout << "Enter the length in inches" << endl;
		int length;
		cin >> length;
			
		try {
		      if (length < 0)
		      {
		         throw length;
		         cout << "After throw (Never executed) \n";
		      }
		       else if (cin.fail()) 
		       {
		       		throw runtime_error("Input is not an integer\n");
			   }
			   else
			   {
			   		float
					    centimeters = 2.54 * length;
					cout << "The length in centimeter is " << centimeters << endl;
					return 1;
			   }
			   		
		   }
		catch (int x ) {
		      cout << "Wrong input. The value is less the 0" << endl;
		      return 0;
		   }
		catch (const std::runtime_error& e) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	        cout << "Wrong input it is not integer" << endl;
	       	return 0;
	    }
	
	
}


int main()
{
	while(1)
	{
		int a = conversion_into_centimeter();
		if (a == 0)
		{
			continue;
		}
		else
		{
			break;
		}	
	}
	
}







