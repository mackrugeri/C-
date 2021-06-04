#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;


struct node {
	int value;
	node *next;
	bool flag;
};

class link_list{
	private:
		node *head = NULL;
		node *temp = NULL;
		node *ptr = NULL;
		int key;
	public:
		
		node* inserting( int value){
			if(head == NULL){
					head = new node;
				 	head->value = value;
					head->next = NULL;
					head->flag = 0;
					cout << "Inserted" << endl;
				}
				else{
					temp = new node;
					temp -> value = value;
					temp->flag = 0;
					temp -> next = head;
					head = temp;
					cout << "Inserted" << endl;
				}
		}

		int Finding(int key){
			int counter =0;
			if (head->next == 	NULL)
			{
				cout << "Link List does not exist" << endl;
				return 0;
			}
			temp = head;
			while(temp != NULL){
					if(temp->next == NULL)
	 				{
	 					cout << " not Found" << endl;
	 					return 0;
					}
					if(key == temp->next->value){
						cout << "THe key is found at index " << counter << endl;
						return 0;
					}
					counter++;
					temp = temp->next;
					
			}

 		}
		
 		int deleting_at(int key){
 			if (head->next == 	NULL)
			{
				cout << "Link List does not exist" << endl;
				return 0;
			}
 			temp = head;
 			while(temp != NULL){
 				if(temp->next == NULL)
 				{
 					cout << " not Found" << endl;
 					return 0;
				 }
 				else {
 					
 					if(key == temp->next->value){
	 				    ptr = temp->next;
	 				    temp->next = temp->next->next;
	 				    delete ptr;
	 				    ptr = NULL;
	 				    return 0;
 					}	
				}
			
 				temp = temp ->next;
 			}
 			cout << "not found" << endl;
 			return 0;
 		}

		int printing(){
			temp = head;
			for(int i=0; i<10; i++){
				cout << temp->value << " ";
				temp = temp ->next;
			}
		}


};

int process(string a )
{
	link_list l1;
	int counter =0;
	string a1;
	stringstream ss(a);
    string item;
    vector<std::string> splittedStrings;
    while (std::getline(ss, item, '-'))
    {
        splittedStrings.push_back(item);
        
        if (counter == 0)
	        {
	        	a1 = item;
	        	counter++;
			}
		else if(counter == 1)
			{
				stringstream degree(item);
				int x = 0;
	    		degree >> x;
				if(a1 == "I")
				{
					l1.inserting(x);
				}
				if(a1 == "D")
				{
					l1.deleting_at(x);
				}
				if(a1 == "S")
				{
					l1.Finding(x);
				}
				counter =0;
			}
        
	}
}

int main(){
		ifstream fin;
	fin.open("read.txt", ios::in);
	
	char my_character ;
	int number_of_lines = 0;
	string a="";
	
		while (!fin.eof() ) {
	
		fin.get(my_character);
			if (my_character == ' ')
			{
				a = a + "-";
			}
			else
			{
				a = a + my_character;
			}
		}
	cout << "NUMBER OF LINES: " << number_of_lines << endl;
	process(a);
}
