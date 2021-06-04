#include <iostream>
#include <string.h>
using namespace std;


struct node{
    char value;
    node *next;
};

class Stack
{
    private: 
        node *head;
        node *temp;
    public:

        Stack()
        {
            head = NULL;
            temp = NULL;
        }
        
        bool Empty_stack(){

            if (head == NULL)
            {
                cout << "Your Stack is Under Flow " << endl;
                return true;
            }
            else
            {
                cout << "There is some thing in Stack " << endl;
                return false;
            }
            

        }
        int push(char val)
        {

            temp = new node; 
            temp->value = val;
            temp-> next = head;
            head = temp;

        }

       
        char pop()
        {

            temp = head;
            int a = temp->value;
            head = temp->next;
            delete temp;
            temp = NULL;
            return a;

        }
        
        char Top()
        {

            cout << "The value of Top is: " <<  head->value << endl;
            return head->value;

        }


        int Rev_string_using_stack(char *ar, int length)
        {

            for(int i=0; i < length; i++)
            {

                push(ar[i]);

            }
            for(int i=0; i< length; i++)
            {
                ar[i] = head->value;
                 pop();

             }
        }
        int Printing1()
        {
            cout << "Your are calling Print function" << endl;
            temp = head;
                cout << temp -> value << endl;
                temp = temp -> next;
        }
       int evaluatePostfix(char* exp) 
	{ 
	    
	    for(int i=0; exp[i]; i++)
	    {
			push(exp[i]); 
	    }
	    int i; 
	    if (Empty_stack()) 
		{
			return -1;
		}
	    for (i = 0; exp[i]; ++i) 
	    { 
	        if(exp[i] == ' ')continue; 
	        else if (isdigit(exp[i])) 
	        { 
	            int num=0; 
	            while(isdigit(exp[i])) 
	            { 
	            num = num * 10 + (int)(exp[i] - '0'); 
	                i++; 
	            } 
	            i--; 
	            push(num); 
	        } 
	        else
	        { 
	            int val1 = pop(); 
	            int val2 = pop(); 
	              
	            switch (exp[i]) 
	            { 
	            case '+': push(val2 + val1); break; 
	            case '-': push( val2 - val1); break; 
	            case '*': push( val2 * val1); break; 
	            case '/': push( val2/val1); break; 
	              
	            } 
	        } 
	    } 
	    return pop(); 
	} 
};

int main ()
{
    Stack S;
	
	char exp[] = "100 200 + 2 / 5 * 7 +";
   	cout << S.evaluatePostfix(exp) << endl;
   
   
}











