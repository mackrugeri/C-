#include <iostream>
#include <fstream>
using namespace std;

class report 
{
	public:
		
};

class DVD
{
	public:
		void sell_iteam(string iteam_name, string *iteam_list, int *total_iteam_list,int length,int total_sell,int *report_iteam)
		{
			for(int i=0; i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					if(total_iteam_list[i] >= total_sell)
					{
						total_iteam_list[i] = total_iteam_list[i] - total_sell;
						report_iteam[i] = total_sell;
						cout << "You have successfull buy that iteam " << endl;
					}
					else
					{
						cout << "Sorry  only " << total_iteam_list[i] << " Left" << endl;
					}
				}
			}
		}
		void iteam_restock(string item_name,string *iteam_list,int *total_iteam_list,int quantity_iteam,int length)
		{
			bool flag = false;
			for(int i=0; i<length;i++)
			{
				if(item_name == iteam_list[i])
				{
					flag = true;
					total_iteam_list[i] = total_iteam_list[i] +quantity_iteam;
					cout << "You have successfull restock the iteam with the amount of " << total_iteam_list[i] << endl;
				} 
			}
			if (flag != true)
			{
				cout << "The iteam you have ask is not in the stock" << endl;
			}
		}
		void update_stock_quanatities(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_update,int length)
		{
			for(int i =0;i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					cout << "The entered iteam quantities is update to " << total_iteam_list[i] << " this " << quantities_to_update  << endl;
					total_iteam_list[i] = quantities_to_update;
				}
			}
		}
		void add_stock(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_enter,int length)
		{
			ofstream fout;
		   	ifstream fin;
		    fin.open("writefile.txt");
		    fout.open ("writefile.txt",ios::app);
		    if(fin.is_open())
		    {
		   		
		   		for(int i =0;i<length;i++)
				{
					fout << iteam_list[i] << " " << total_iteam_list[i] << endl;
				}
				fout << iteam_name << " " << quantities_to_enter << endl;
				cout << "Successfull added" << endl;
		    }
			
		}
		void reporting(string *iteam_list,int *total_iteam_list,int length,int *report_iteam)
		{
			cout << "Report Generation of iteams" << endl;
			cout << "Total Number of Production is " << length << endl;
			for(int i =0; i<length ;i++)
			{
				cout << "Product Name " << iteam_list[i]   << " Total Sale " << report_iteam[i] << " Total iteams avaiable in stock now " << total_iteam_list[i] << endl;
			}
		
		}	
		
};
class CD
{
	public:
		void sell_iteam(string iteam_name, string *iteam_list, int *total_iteam_list,int length,int total_sell,int *report_iteam)
		{
			for(int i=0; i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					if(total_iteam_list[i] >= total_sell)
					{
						total_iteam_list[i] = total_iteam_list[i] - total_sell;
						report_iteam[i] = total_sell;
						cout << "You have successfull buy that iteam " << endl;
					}
					else
					{
						cout << "Sorry  only " << total_iteam_list[i] << " Left" << endl;
					}
				}
			}
		}
		void iteam_restock(string item_name,string *iteam_list,int *total_iteam_list,int quantity_iteam,int length)
		{
			bool flag = false;
			for(int i=0; i<length;i++)
			{
				if(item_name == iteam_list[i])
				{
					flag = true;
					total_iteam_list[i] = total_iteam_list[i] +quantity_iteam;
					cout << "You have successfull restock the iteam with the amount of " << total_iteam_list[i] << endl;
				} 
			}
			if (flag != true)
			{
				cout << "The iteam you have ask is not in the stock" << endl;
			}
		}
		void update_stock_quanatities(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_update,int length)
		{
			for(int i =0;i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					cout << "The entered iteam quantities is update to " << total_iteam_list[i] << " this " << quantities_to_update  << endl;
					total_iteam_list[i] = quantities_to_update;
				}
			}
		}
		void add_stock(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_enter,int length)
		{
			ofstream fout;
		   	ifstream fin;
		    fin.open("writefile.txt");
		    fout.open ("writefile.txt",ios::app);
		    if(fin.is_open())
		    {
		   		
		   		for(int i =0;i<length;i++)
				{
					fout << iteam_list[i] << " " << total_iteam_list[i] << endl;
				}
				fout << iteam_name << " " << quantities_to_enter << endl;
				cout << "Successfull added" << endl;
		    }
			
		}
		void reporting(string *iteam_list,int *total_iteam_list,int length,int *report_iteam)
		{
			cout << "Report Generation of iteams" << endl;
			cout << "Total Number of Production is " << length << endl;
			for(int i =0; i<length ;i++)
			{
				cout << "Product Name " << iteam_list[i]   << " Total Sale " << report_iteam[i] << " Total iteams avaiable in stock now " << total_iteam_list[i] << endl;
			}
		
		}	
		
};
class books
{
	public:
		void sell_iteam(string iteam_name, string *iteam_list, int *total_iteam_list,int length,int total_sell,int *report_iteam)
		{
			for(int i=0; i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					if(total_iteam_list[i] >= total_sell)
					{
						total_iteam_list[i] = total_iteam_list[i] - total_sell;
						report_iteam[i] = total_sell;
						cout << "You have successfull buy that iteam " << endl;
					}
					else
					{
						cout << "Sorry  only " << total_iteam_list[i] << " Left" << endl;
					}
				}
			}
		}
		void iteam_restock(string item_name,string *iteam_list,int *total_iteam_list,int quantity_iteam,int length)
		{
			bool flag = false;
			for(int i=0; i<length;i++)
			{
				if(item_name == iteam_list[i])
				{
					flag = true;
					total_iteam_list[i] = total_iteam_list[i] +quantity_iteam;
					cout << "You have successfull restock the iteam with the amount of " << total_iteam_list[i] << endl;
				} 
			}
			if (flag != true)
			{
				cout << "The iteam you have ask is not in the stock" << endl;
			}
		}
		void update_stock_quanatities(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_update,int length)
		{
			for(int i =0;i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					cout << "The entered iteam quantities is update to " << total_iteam_list[i] << " this " << quantities_to_update  << endl;
					total_iteam_list[i] = quantities_to_update;
				}
			}
		}
		void add_stock(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_enter,int length)
		{
			ofstream fout;
		   	ifstream fin;
		    fin.open("writefile.txt");
		    fout.open ("writefile.txt",ios::app);
		    if(fin.is_open())
		    {
		   		
		   		for(int i =0;i<length;i++)
				{
					fout << iteam_list[i] << " " << total_iteam_list[i] << endl;
				}
				fout << iteam_name << " " << quantities_to_enter << endl;
				cout << "Successfull added" << endl;
		    }
			
		}
		void reporting(string *iteam_list,int *total_iteam_list,int length,int *report_iteam)
		{
			cout << "Report Generation of iteams" << endl;
			cout << "Total Number of Production is " << length << endl;
			for(int i =0; i<length ;i++)
			{
				cout << "Product Name " << iteam_list[i]   << " Total Sale " << report_iteam[i] << " Total iteams avaiable in stock now " << total_iteam_list[i] << endl;
			}
		
		}	
		
};
class magazines
{
	public:
		void sell_iteam(string iteam_name, string *iteam_list, int *total_iteam_list,int length,int total_sell,int *report_iteam)
		{
			for(int i=0; i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					if(total_iteam_list[i] >= total_sell)
					{
						total_iteam_list[i] = total_iteam_list[i] - total_sell;
						report_iteam[i] = total_sell;
						cout << "You have successfull buy that iteam " << endl;
					}
					else
					{
						cout << "Sorry  only " << total_iteam_list[i] << " Left" << endl;
					}
				}
			}
		}
		void iteam_restock(string item_name,string *iteam_list,int *total_iteam_list,int quantity_iteam,int length)
		{
			bool flag = false;
			for(int i=0; i<length;i++)
			{
				if(item_name == iteam_list[i])
				{
					flag = true;
					total_iteam_list[i] = total_iteam_list[i] +quantity_iteam;
					cout << "You have successfull restock the iteam with the amount of " << total_iteam_list[i] << endl;
				} 
			}
			if (flag != true)
			{
				cout << "The iteam you have ask is not in the stock" << endl;
			}
		}
		void update_stock_quanatities(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_update,int length)
		{
			for(int i =0;i<length;i++)
			{
				if(iteam_name == iteam_list[i])
				{
					cout << "The entered iteam quantities is update to " << total_iteam_list[i] << " this " << quantities_to_update  << endl;
					total_iteam_list[i] = quantities_to_update;
				}
			}
		}
		void add_stock(string iteam_name,string *iteam_list,int *total_iteam_list,int quantities_to_enter,int length)
		{
			ofstream fout;
		   	ifstream fin;
		    fin.open("writefile.txt");
		    fout.open ("writefile.txt",ios::app);
		    if(fin.is_open())
		    {
		   		
		   		for(int i =0;i<length;i++)
				{
					fout << iteam_list[i] << " " << total_iteam_list[i] << endl;
				}
				fout << iteam_name << " " << quantities_to_enter << endl;
				cout << "Successfull added" << endl;
		    }
			
		}
		void reporting(string *iteam_list,int *total_iteam_list,int length,int *report_iteam)
		{
			cout << "Report Generation of iteams" << endl;
			cout << "Total Number of Production is " << length << endl;
			for(int i =0; i<length ;i++)
			{
				cout << "Product Name " << iteam_list[i]   << " Total Sale " << report_iteam[i] << " Total iteams avaiable in stock now " << total_iteam_list[i] << endl;
			}
		
		}	
		
};
