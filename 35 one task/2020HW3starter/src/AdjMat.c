/*
*	test.c
*
*	created on Jul4,2019
*	Author: Therese
*/


#include <stdio.h>
#include "Adjcancy Matrix.h"


int N, M; 
void createAdjMatrix(int Adj[][N], int arr[][2]) 
{ 
    int i =0;
    int j=0;
    for ( i = 0; i < N; i++) { 
  		j=0;
        for (j = 0; j < N; j++) { 
        	int num;
		    printf("Enter the Number: of %d %d ",i,j);
		    scanf("%d", &num);
            Adj[i][j] = num; 
//            printf("%d ", Adj[i][j]); 
        } 
    } 
} 
void printAdjMatrix(int Adj[][N]) 
{ 
  	int i =0;
  	int j=0;
    for ( i = 0; i < N; i++) { 
    	j=0;
        for ( j = 0; j < N; j++) { 
  
            printf("%d ", Adj[i][j]); 
        } 
        printf("\n"); 
    } 
} 
