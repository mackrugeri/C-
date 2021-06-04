#include <iostream>
using namespace std;

class student_classes{
	private:
		string Class_name;
		int Number_of_student;
		int Class_hours;
	public:
		student_classes()
		{
			Class_name ="";
			Number_of_student = 0;
			Class_hours = 0;
		}
		student_classes(string name,int number,int hour)
		{
			Class_name = name;
			Number_of_student = number;
			Class_hours = hour;
		}
		friend ostream &operator << (ostream &output,student_classes &p);
		friend istream &operator >> (istream &input,student_classes &p);
		
		student_classes operator + (const student_classes &obj)
		{
			student_classes S;
			S.Number_of_student =  Number_of_student + obj.Number_of_student;
			return S;
		}
		student_classes operator - (const student_classes &obj)
		{
			student_classes S;
			S.Number_of_student =  Number_of_student - obj.Number_of_student;
			return S;
		}
		
};
ostream &operator << (ostream &output,student_classes &p)
		{
			output << "Class name " << p.Class_name << endl;
			output << "Number of Student " << p.Number_of_student << endl;
			output << "Class hours " << p.Class_hours << endl;
		}
istream &operator >> (istream &input,student_classes &p)
		{
			cout << "Enter the Class name" << endl;
			input >> p.Class_name;
			cout << "Enter the Number of student" << endl;
			input >> p.Number_of_student;
			cout << "Enter the Class Hour" << endl;
			input >> p.Class_hours;
		}

int main()
{
	cout << "Welcome Client Program so Enter: \n1) to register \n2) to Drop \n3) to Print \n-1) to exist" << endl;
	int a =0;
	cin >> a;
	
	if (a ==1)
	{
		int value;
		cout << "Enter the value to add" << endl;
		cin >> value;
		student_classes SAdd("",value,0);
		
		cout << "Enter values for which you want to add" << endl;
		student_classes S;
		cin >>S;
		S = S + SAdd;
		
		cout << S << endl;
	}
	else if(a == 2)
	{
		int value;
		cout << "Enter the value to drop" << endl;
		cin >> value;
		student_classes SAdd("",value,0);
		
		cout << "Enter values for  which you want to drop" << endl;
		student_classes S;
		cin >>S;
		S = S - SAdd;
		
		cout << S << endl;
	}
	else if(a == 2)
	{
		cout << "Hello world" << endl;
	}
	else if(a == -1)
	{
		cout << "Gud by" << endl;
// 		break;
	}
	
	
	return 0;
}











