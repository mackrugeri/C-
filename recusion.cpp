#include <iostream>
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
		int inserting( node *temp,int value){
			if(temp->next != null)
			{
				temp = new node;
				temp->value = value;
				temp->next = null;
				return temp;
			}
			while(temp->next != null)
			{
				temp =temp->next;
			}
			temp->next = new node;
			temp =temp->next;
			temp->value = value;
			temp->next = null;
			return temp;
		}

		int Finding(){
			cout << endl;
			cout << "which value do you need to found" << endl;
			cin >> key;
			temp = head;
			while(temp != NULL){
					if(key == temp->next->value){
						cout << "It is found" << endl;
						return 0;
					}
					temp = temp->next;
			}

 		}
		
 		int deleting_at(){
 			cout << endl;
 			cout << "which value of node do you want to delete" << endl;
 			cin >> key;
 			temp = head;
 			while(temp != NULL){
 				if(key == temp->next->value){
 					cout << "It is found" << endl;
 					    ptr = temp->next;
 					    temp->next = temp->next->next;
 					    delete ptr;
 					    ptr = NULL;
 					    return 0;
 				}
 				temp = temp ->next;
 			}
 		}

		int printing(){
			temp = head;
			for(int i=0; i<10; i++){
				cout << temp->value << " ";
				temp = temp ->next;
			}
		}


};

int main(){

	link_list l1;
	l1.inserting();
	 l1.Finding();
	 l1.printing();
}
