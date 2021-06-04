#include<iostream>
using namespace std;

class DVR{
	private:
		int graph[50][50];
		char ch[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
		int final[50][50];
		int via[50][50];
	    int i,j,k,t;
	    int nn;
	public:
		int printing()
		{
			 /* Display table Updation */
		    for (i=0;i<nn;i++)
		    {
		        cout<<"\n"<<ch[i]<<" Table";
		        cout<<"\nNode\tDist\tVia";
		        for(j=0;j<nn;j++)
		        {
		            cout<<"\n"<<ch[j]<<"\t"<<final[i][j]<<"\t";
		            if(i==via[i][j])
		                cout<<"-";
		            else
		                cout<<ch[via[i][j]];
		        }
		    }	
		}
		int initalization()
		{
			for (i=0;i<nn;i++)
		    {
		        for(j=0;j<nn;j++)
		        {
		            graph[i][j]=-1;
		        }
		    }
		}
		int getting_input()
		{
			for (i=0;i<nn;i++)
		    {
		        for(j=0;j<nn;j++)
		        {
		            if(i==j)
		            {
		                graph[i][j]=0;
		            }
		            if(graph[i][j]==-1)
		            {
		                cout<<"\n Enter the dis: "<<ch[i]<<" - "<<ch[j]<<" : ";
		                cin>>t;
		                graph[i][j]=graph[j][i]=t;
		            }
		        }
		    }
		}
		
		int After_initialization()
		{
			for (i=0;i<nn;i++)
		    {
		        cout<<"\n"<<ch[i]<<" Table";
		        cout<<"\nNode\tDist\tVia";
		        for(j=0;j<nn;j++)
		        {
		            cout<<"\n"<<ch[j]<<"\t"<<graph[i][j]<<"\t"<<via[i][j];
		        }
		    }
		}
		int updating_the_table(int sh[50][50][50])
		{
					    /* Updating */
		    
		    for(i=0;i<nn;i++)
		    {
		        for(j=0;j<nn;j++)
		        {
		            /* Copy initial value from input graph*/
		            final[i][j]=graph[i][j];
		            via[i][j]=i;
		             
		            /*Update them*/
		            /* Check condition a - b - c */
		            for(k=0;k<nn;k++)
		            {
		                 
		                if((final[i][j]>sh[i][k][j]) || (final[i][j] == -1))
		                {
		                    if(sh[i][k][j]>-1)
		                    {
		                        final[i][j]=sh[i][k][j];
		                        via[i][j]=k;
		                    }
		                }
		            }
		            /* After considering three vertex if final not found 
		                consider 4th
		                a- b- c- d
		            */
		 
		            if(final[i][j]==-1)
		            {
		                for(k=0;k<nn;k++)
		                {
		 
		                    if((final[i][k]!=-1)&&(final[k][j]!=-1))
		                    {
		                        if((final[i][j]==-1) || ((final[i][j]!=-1) &&(final[i][j]>final[i][k]+final[k][j]))) 
		                        {
		                            if(final[i][k]+final[k][j]>-1)
		                            {
		                                final[i][j]=final[i][k]+final[k][j];
		                                via[i][j]=k;
		                            }
		                        }
		                    }   
		                }
		            }
		        }
		    }
		}
		int  Dvr()
		{
			 cout<<"\n Enter Number of Nodes:";
		    cin>>nn;
		 
		    /* Initialize graph*/
			initalization();		    
		 	getting_input();
		    for (i=0;i<nn;i++)
		    {
		        for(j=0;j<nn;j++)
		        {
		            via[i][j]=-1;
		        }
		    }
		 
		    cout<<"\n After Initialization";
		    After_initialization();
		    
		    int sh[50][50][50];
		    for(i=0;i<nn;i++)
		    {
		        for(j=0;j<nn;j++)
		        {
		            for (k=0;k<nn;k++)
		            {
		                /* Check if edge is present or not*/
		                if((graph[i][j]>-1)&&(graph[j][k]>-1))
		                {
		                    sh[i][j][k]=graph[j][k]+graph[i][j];
		                }
		                else
		                {
		                    sh[i][j][k]=-1;
		                }
		            }
		        }
		    }
		     
		    cout << endl;
			cout << endl; 
		    cout << "======================================" << endl;
		    cout << endl;
			cout << endl;
			
			updating_the_table(sh);
		 
		    cout<<"\n After Update :";
		   	printing();
		}
};
 
int main()
{
    int graph[50][50];
    int i,j,k,t;
    int nn;
 
   DVR D;
   D.Dvr();
 
}

