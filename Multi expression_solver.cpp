//(2 + 4 + 6 + 8 + 10 + 12).

// part 1 to part 5 of question 2
#include <iostream>
#include <sstream>
using namespace std;

int conversion(string str) {
	
	stringstream intTicket(str);

	int num = 0;
	intTicket >> num;

	return num;
}
int part1_to_part5(string expression)
{
	string var ="";
	for(int i =0; i<expression.length();i++)
	{

		if((expression[i] == '(') || (expression[i] == ')'))
		{
			continue;	
		}
		if (expression[i] == ' ')
		{
			continue;
		}
		var = var + expression[i];
		
	}
	string var1 ="";
	string var2 = "";
	string sign = "";
	int sum =0;
	string pre_sign = "";
	int flag =0;
		for(int j=0; j < var.length();j++)
		{
			if(var[j] == '+' || var[j] == '*')
			{
				sign = var[j];
				flag =1;
			}
			else if (flag == 1)
			{
				var2 = var2 + var[j];
					int num1 = conversion(var1);
					int num2 = conversion(var2);
					if (sign == "+")
					{
						if (pre_sign == "+")
						{
							sum = sum + (num1 + num2);
						}
						if (pre_sign == "*")
						{
							sum = sum * (num1 + num2);
						}
						if (pre_sign == "-")
						{
							sum = sum - (num1 + num2);	
						}
						if (pre_sign == "/")
						{
							sum = sum / (num1 + num2);
						}
						if (pre_sign == "")
						{
							sum =  (num1 + num2);
						}
						pre_sign = "+";
					}
					if (sign == "*")
					{
						if (pre_sign == "+")
						{
							sum = sum + (num1 * num2);
						}
						if (pre_sign == "*")
						{
							sum = sum * (num1 * num2);
						}
						if (pre_sign == "-")
						{
							sum = sum - (num1 * num2);	
						}
						if (pre_sign == "/")
						{
							sum = sum / (num1 * num2);
						}
						if (pre_sign == "")
						{
							sum =  (num1 * num2);
						}
						pre_sign = "*";
					}
					if (sign == "-")
					{
						if (pre_sign == "+")
						{
							sum = sum + (num1 - num2);
						}
						if (pre_sign == "*")
						{
							sum = sum * (num1 - num2);
						}
						if (pre_sign == "-")
						{
							sum = sum - (num1 - num2);	
						}
						if (pre_sign == "/")
						{
							sum = sum / (num1 - num2);
						}
						if (pre_sign == "")
						{
							sum =  (num1 - num2);
						}
						pre_sign = "-";
					}
					if (sign == "/")
					{
						if (pre_sign == "+")
						{
							sum = sum + (num1 / num2);
						}
						if (pre_sign == "*")
						{
							sum = sum * (num1 / num2);
						}
						if (pre_sign == "-")
						{
							sum = sum - (num1 / num2);	
						}
						if (pre_sign == "/")
						{
							sum = sum / (num1 / num2);
						}
						if (pre_sign == "")
						{
							sum =  (num1 / num2);
						}
						pre_sign = "/";
					}
					flag =0;
					var1 = "";
					var2 ="";
				}
			
			else if (flag == 0)
			{
				var1 = var1 + var[j];		
			}	
		}
	cout << sum << endl;
	return sum;
	
}
int main()
{
	part1_to_part5("((2+4)+(3+5)+(6+8))");
//	part6
//	cout << 125187 << endl;
//	part 7
	int read1=0;
	int read2 =0;
	
	cout << "enter values for read 1 and read 2 " << endl;
	cin >> read1;
	cin >> read2;
//	cout << read1 * read2 << endl;
}






