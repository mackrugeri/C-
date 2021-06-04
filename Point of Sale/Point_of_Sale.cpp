#include <iostream>
#include <vector>
using namespace std;

class Item
{
	private:
		int itemCode;
		string ItemName;
		string ItemDesc;
		double weight;
		double price;
	public:
		
		Item(int code,string itemName,string itemDesc,double weight, double price)
		{
			this->itemCode = code;
			this->ItemName = itemName;
			this->ItemDesc = itemDesc;
			this->weight = weight;
			this->price = price;
		} 

		~Item()
		{
			this->itemCode = 0;
			this->ItemName = "";
			this->ItemDesc = "";
			this->weight = 0.0;
			this->price = 0.0;
		}
		
		void setItemCode (int code)
		{
			this->itemCode = code;
		}
		int getItemCode()
		{
			return itemCode;
		}
		void setItemName(string item)
		{
			this->ItemName = item; 
		}
		string getItemName()
		{
			return this->ItemName;
		}
		void setItemDesc(string item)
		{
			this->ItemDesc = item;
		}
		string getItemDesc()
		{
			return this->ItemDesc;
		}
		double getItemWeight()
		{
			return this->weight;
		}
		void setItemWeight(double w )
		{
			this->weight = w;
		}
		void setItemPrice(double p)
		{
			this->price = p;
		}
		double getItemPrice()
		{
			return this->price;
		}
		void printItemDetails()
		{
			cout << "Item Detail" << endl;
			cout << "Item Name" << this->ItemName << endl;
			cout << "Item Description " << this->ItemDesc << endl;
			cout << "Weight " << this->weight << endl;
			cout << "Price " << this->price << endl;
		}
		
		
};

class Payment
{
	public:
		virtual void printPaymentTerms(double amt) = 0;  
};

class cash: public Payment
{
	private:
			int a;
	public:
		~ cash()
		{
			a= 0;	
		}
		void printPaymentTerms(double amt)
		{
			cout << "Hello world" << endl;
		}
	
};

class CreditCard: public Payment
{
	private:
			int a;
	public:
		~CreditCard()
		{
			a= 0;	
		}
		void printPaymentTerms(double amt)
		{
			
			cout << "Hello world" << endl;
		}
		
};	

class Order
{
	private:
		string customerContact;
		int  deliveryZone;
		vector<Item> order;
		int paymentMethod;
		double netPurchaseAmtl;
		double deliveryCharge;
		double totalWeight;
	
	public:
		
		Order()
		{
			customerContact = "";
			deliveryZone = 0;
			paymentMethod= 0;
			netPurchaseAmtl = 0.0;
			deliveryCharge = 0.0;
			totalWeight = 0.0;
		} 
		Order(string customerContact, int deliveryZone, vector<Item> v, int paymentMethod, double netPurchaseAmt, double totalWeight)
		{
			this->customerContact = customerContact;
			this->deliveryZone = deliveryZone;
			this->paymentMethod = paymentMethod;
			this->netPurchaseAmtl = netPurchaseAmtl;
			this->deliveryCharge = deliveryCharge;
			this->totalWeight = totalWeight;
		}
		~Order()
		{
			customerContact = "";
			deliveryZone = 0;
			paymentMethod= 0;
			netPurchaseAmtl = 0.0;
			deliveryCharge = 0.0;
			totalWeight = 0.0;
		}
		PrintOrderedItem()
		{
			cout << "Here is the Print Ordered Item" << endl;
			cout << "Customer Contact: " << customerContact << endl;
			cout << "Delivery Zone" << deliveryZone << endl;
			cout << "PaymentMethod" << paymentMethod << endl;
			cout << "Net Purchasing Amtl " << netPurchaseAmtl << endl;
			cout << "Delivery Charges" << deliveryCharge << endl;
			cout << "Total Weight" << endl;
		}
		int setDeliveryZone()
		{
			int a;
			cout << "Selct you Delivery Zone" << endl;
			cout << "Press 1 for the local" << endl;
			cout << "Press 2 for the Asia-Pacific" << endl;
			cout << "Press 3 for the International" << endl;
			
			cin >> a;
			this->deliveryZone = a;
		}
		int getDeliveryZone()
		{
			return deliveryZone;
		}
		string getCustomerContact()
		{
			return customerContact;
		}
		void setItemList()
		{
		}
		vector<Item> getItemList()
		{
			return order;
		}
		double getNetPurchaseAmt()
		{
			return netPurchaseAmtl;
		}
		void setDeliveryCharge()
		{
			int a = getDeliveryZone();
			double b = getTotalWeight() / 1000;
			this->deliveryCharge = 50 * a + b *10 * a; 
		}
		double getDeliveryCharge()
		{
			return deliveryCharge;
		}
		void setTotalWeight(double w)
		{
			totalWeight = w;
		}
		double getTotalWeight()
		{
			return totalWeight;
		}
		void setPaymentMethod()
		{
			cout << "Select your Paynment Method" << endl;
			cout << "1) for Cash" << endl;
			cout << "2) CerditCard file" << endl;
			int a =0;
			cin >> a ;
			paymentMethod = 1;
		}
		int  getPaymentMethod()
		{
			return paymentMethod;
		}
		
		
};

class Customer{
	private:
		string mobileNum;
		string customerName;
		double total_price;
		vector<Order> order;
	public:
		Customer(string name, string mobileNum)
		{
			mobileNum = mobileNum;
			customerName = name;
			total_price =0;
		}
		Customer()
		{
			total_price =0;	
		}
		~Customer()
		{
			mobileNum = "";
			customerName = "";
		}
		void setName(string name)
		{
			customerName = name;
		}
		string getName()
		{
			return customerName; 
		}
		void settotal_print(double price)
		{
			total_price = total_price +price;
		}
		double gettotal_print()
		{
			return total_price; 
		}
		void setMobileNum(string mobile)
		{
			mobileNum = mobile;
		}
		string getMobileNum()
		{
			return mobileNum;
		}
		vector<Order> getOrder()
		{
			order.push_back(Order());
			order[0].setDeliveryZone();
			order[0].setTotalWeight(100.0);
			order[0].setPaymentMethod();
			
		}
		void printCustomerDetail()
		{
			cout << "Here is the Detail of the Customer" << endl;
			cout << "Name: " << customerName << endl;
			cout << "Phone Number " << mobileNum << endl;
		}	
};
class menu
{
	public:
	void selection_of_interface()
	{ 
		
		
		
		
		int i=0;
		int deliveryZone;
		vector<Customer> c;
		vector<Item> I;
		vector<int> codes;
		vector<string> item; 
		int flag = 1;
		int code = 0;
		while(1)
		{
			system("cls");
			cout << "========================" << endl;
			cout << "Welcome to the Point of Sale Interface" << endl; 
			cout << "1) Manager" << endl;
			cout << "2) Customer" << endl;
			cout << "3) exit "<< endl;
			cout << "========================" << endl;	
			
			cout << "Select according to there number" << endl;;
			int a =0;
			int b =0;
			
			cin >> a;
			if(a == 1)
			{
				while(1)
				{	
					system("cls");
					cout << "========================" << endl;
					cout << "You have selected the Manager Interface " << endl;	
					cout << "========================" << endl;
					cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
					cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
					cout << "========================" << endl;
					cout << "1) Printing all order Made by Customer and there total Revenues" << endl;
					cout << "2) Customer detail" << endl;
					cout <<" 3) Add Item in the list " << endl;
					cout << "4) To exist" << endl;
					cout << "========================" << endl;
					
					cout << "Select according to there number" << endl;;
					cin >> b;
					double total= 0;
					int i = 0;
					if(b == 1)
					{
						for (int i = 0; i < c.size(); i++)
						{
							c[i].printCustomerDetail();
		        		 	total = total + c[i].gettotal_print();	
						}
						cout << "Total revenue is " << total << endl;
					}
					else if ( b == 2)
					{
						for (int i = 0; i < c.size(); i++)
						{
							c[i].printCustomerDetail();	
						}
		        		
					}
					else if ( b == 3)
					{
						
						string itemName;
						string itemDesc;
						double weight;
						double price;
						cout << "Enter the Detail "<< endl;
						cout << "Item Name" << endl;
						cin >> itemName;
						cout << "Item Desc" << endl;
						cin >> itemDesc;
						cout << "Weight of the Product " << endl;
						cin >> weight;
						cout << "Price of the product" << endl;
						cin >> price;
						I.push_back(Item(code,itemName,itemDesc,weight,price));
					}
					else if ( b == 4)
					{
						break;
					}
					else
					{
						cout << "Wrong input" << endl;
					}
				
				}
			}
			else if(a == 2)
			{
				while(1)
				{
						
					system("cls");
					cout << "========================" << endl;
					cout << "You have selected the Customer Interface " << endl;	
					cout << "========================" << endl;
					cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
					cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
					
					cout << "1) Register your self" << endl;
					cout << "2) Order List" << endl;
					cout << "3) Reveiw your List" << endl;
					cout << "4) Selection of Zone" << endl;
					cout << "5) Information related to Order" << endl;
//					cout << "7) TO print Order List" << endl;
					cout << "6) To exit" << endl;
					
					cout << "Select according to there number" << endl;;
					cin >> b;
					
					if(b == 1)
					{
						system("cls");
						cout << "========================" << endl;
						cout << "You have selected the Customer Interface " << endl;	
						cout << "========================" << endl;
						cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
						cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
						string name;
						string phone;
						cout << "Enter you name" << endl;
						cin >> name;
						cout << "Enter you Phone" << endl;
						cin >> phone;
						c.push_back(Customer(name,phone));
						i++;
					}
					else if ( b == 2)
					{
						cout << "Here is the list of avaiable Item Kindly Select from it " << endl;
						for (int j =0; i<I.size(); i++)
						{
							cout <<"Code of Item"  << I[j].getItemCode() << "   " <<  "Name of Item" << I[j].getItemName() << endl;
						}
						int cod;
						cout << "Enter the Item code" << endl;
						cin >> code;
						c[i].settotal_print(I[cod].getItemPrice());
						codes.push_back(code);
						item.push_back(I[code].getItemName());
					}
					else if ( b == 3)
					{
						cout << "List to Reveiw" << endl;
						for(int j=0; j< item.size();j++)
						{
							cout << j << " " << item[j] << endl;
						}
					}
					else if ( b == 4)
					{
						int a;
						cout << "Selct you Delivery Zone" << endl;
						cout << "Press 1 for the local" << endl;
						cout << "Press 2 for the Asia-Pacific" << endl;
						cout << "Press 3 for the International" << endl;
						cin >> a;
						deliveryZone = a;
					}
					else if (b == 5)
					{
						for(int i =0; i< I.size(); i++)
						{

						I[codes[i]].printItemDetails();
 						}
					}
					else if( b == 6)
					{
						break;
					}
					else
					{
						system("cls");
						cout << "========================" << endl;
						cout << "You have selected the Customer Interface " << endl;	
						cout << "========================" << endl;
						cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
						cout << " /*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*/*" << endl;
						cout << "Wrong input" << endl;
					}
					
					
				}
			}
			else if ( a == 3)
			{
				break;
			}
			else
			{
					cout << "Sorry you have enter the wrong one " << endl;
			}
		}
	}	
};

int main()
{
	menu m;
	m.selection_of_interface();
} 




