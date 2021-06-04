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
        
        int Empty_stack(){

            if (head == NULL)
            {
                return true;
                
            }
            else
            {
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

        int top()
        {

            return head->value;

        }
        int pop()
        {

            temp = head;
            head = temp->next;
            delete temp;
            temp = NULL;

        }
        
        bool isBalanced(string s)
		{
		
		
		    for (int i = 0; i < s.length(); i++)
		    {
		
		        if (Empty_stack())
		        {
		            push(s[i]);
		        }
		        else if (top() == '(' && s[i] == ')' || top() == '{' && s[i] == '}' || top() == '[' && s[i]== ']')
		        {
		            pop();
		        }
		        else
		            push(s[i]);
		    }
		
		    if (Empty_stack())
		        return true;
		    else
		        return false;
		}
};

