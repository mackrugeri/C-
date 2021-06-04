#include <iostream>
#include <vector>

using namespace std;
class Sequential_Search_finding
{
	
	public:
		int search_function(vector<string> string_based_vector)
		{
			string name;
			cout << "Enter the name which you want to find" << endl;
			cin >> name;
			bool flag =false;
			
			for(int i =0; i<string_based_vector.size();i++)
			{
				if (string_based_vector[i] == name)
				{
					flag = true;
					cout << "Found "<< string_based_vector[i] <<" at index " << i << endl;
				}
			}
			if(flag == false)
			{
				cout << name <<" is not found in the list" << endl;
			}
		}
		int sorting_list(vector<string> string_based_vector)
		{
			string temp;
			for(int i =0; i<string_based_vector.size();i++)
			{
				for(int j=0; j<string_based_vector.size();j++)
				{
					if(string_based_vector[i] < string_based_vector[j])
					{
						temp = string_based_vector[i];
						string_based_vector[i] = string_based_vector[j];
						 string_based_vector[j] = temp;
					}
				}
			}
			
			for(int i=0; i<string_based_vector.size();i++)
			{
				cout << string_based_vector[i] << " ";
			}
		}
		int talking_input()
		{
			vector<string> string_based_vector;
			string name;
			
			for(int i =0; i<10;i++)
			{
				cout << "Enter the name" << endl;
				cin >> name;
				string_based_vector.push_back(name);
			}
			
		
			sorting_list(string_based_vector);
			search_function(string_based_vector);
		}
};

int main()
{
	Sequential_Search_finding S;
	S.talking_input();
}








