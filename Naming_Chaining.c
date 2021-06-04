#include <stdio.h>
#include <string.h>

int main() {
//   printf("Hello World!");
	int handle =0;
	printf("Enter the value of handle\n");
	scanf("%d",&handle);	
	printf("Number = %d", handle);
	
	char name[20];
	const char *a1[handle][handle];
	int i=0;
	printf("\n");
	for(i =0; i<handle; i++)
	{
		printf("Enter name: \n");
    	scanf("%s", name);
		a1[i][5] = name;	
		printf("%d",i);
	}
//    i=0;
//	char a;
//	char b;
	
	i=0;
	for( i=0; i<handle;i++)
	{
		printf("%s",a1[i][5]);
		printf("%d",i);
	}
	
//	printf("%c", a);
//	
//	i=0;
//	int j=0;
//	for(i =0; i<handle-1; i++)
//	{
//		printf("%s",a1[1]);
//		const char *strrchr = a1[i];
//		a = strrchr[strlen(a1[i])-1];
//		for(j=i+1;j<handle;j++)
//		{
//			const char *strrchr1 = a1[j];
//			b = strrchr1[0];
//		    printf("%c",a);
////		    printf("%c",b);
//			if(a == b)
//			{
//				printf("%s",a1[i]);
//				printf("%s",a1[j]);
//				}	
//		}
//	}
//	printf(str)
//	const char *b1[5] = {"a","g","b","c","a"};
//	
//	i =0;
//	for(i =0 ;i<5;i++)
//	{
//		if(strcmp)
//	}
		
	
   return 0;
}
