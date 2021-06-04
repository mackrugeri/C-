#include <stdio.h>
#include <string.h>

int main()
{

	
	
	int handle =0;
	printf("Enter the value of handle\n");
	scanf("%d",&handle);	
	printf("Number = %d", handle);
//	input the values 	
	char str_arr[handle][20];     // declaration of array
	int k =0;    // loop varaiable
	for(k =0; k<handle; k++)
	{
		printf("Enter name: \n");     // taking input from the users
    	scanf("%s", str_arr[k]);	
	}
	
////	declaration of varaiable 
	int j;
	int i;
	char a;
	char b;
	
	printf("Result\n");
//	Processing and Camparing with each other
	for(i =0; i<4; i++)
	{
//		getting the character from the first one 
		const char *strrchr = str_arr[i];
		a = strrchr[strlen(str_arr[i])-1];
		for(j=i+1;j<4;j++)
		{
//			getting the character from the  second one
			const char *strrchr1 = str_arr[j];
			b = strrchr1[0];
//			checking that both are same or not 
			if(a == b)
			{
				printf("%s",str_arr[i]);
				printf(" ");
				printf("%s",str_arr[j]);
				printf("\n");
			}	
		}
	}
	return 0;
}
