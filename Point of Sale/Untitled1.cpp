#include <iostream>
#include <fstream>
using namespace std;

// 1
double average_of_array(double *double_array, int n)
{
	int means =0;
	for (int i =0; i<n; i++)
	{
		means = means + double_array[i];
	}
	return means/n;
}
// 2
void print_ints_to_filename(int *int_array, int n, char *filename)
{
   ofstream outdata; 
   int i; 

   outdata.open("filename.txt");
   if( !outdata ) { 
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }

	for (i=0; i<n; ++i)
	{
		outdata << int_array[i] << endl;	
	}
	outdata.close();
}
// 3
void print_file_to_terminal(char *filename)
{
    FILE *filePointer;
    char ch;
    filePointer = fopen(filename, "r");
    if (filePointer == NULL)
    {
        printf("File is not available \n");
    }
    else
    {
        while ((ch = fgetc(filePointer)) != EOF)
        {
            printf("%c", ch);
        }
    }
}

// 4
int *plot_quadratic_results(int n, int a, int b, int c)
{
	int array[n];
	for(int i=0; i<n; i++)
	{
		array[i] = (a*(n*n)) + (b*n) + c;
	}
	return array;
}





