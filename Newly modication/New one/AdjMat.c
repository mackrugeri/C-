/*
 * AdjMat.c
 *
 *  Created on: Oct 24, 2019
 *      Author: Therese
 */

#include "Prototype.h"
#include <stdio.h>
#ifndef ADJMAT_H_
#define ADJMAT_H_
#include <stdbool.h>
typedef struct
{
	int n;
	int* edgesP;
}AdjMat;

void init(AdjMat* adjMP)
{
	int ncols = adjMP->n;
	printf("In init with ncols = %d\n", ncols);
	int row =0;
	int col =0;
	for( row = 0; row<ncols; row++)
	{
		col =0;
		for( col = 0; col<ncols; col++)
		{
			*((adjMP->edgesP)+(row*ncols)+col)= 0;
		}
	}

}

void setEdge(AdjMat* adjMP, int row, int col)
{

	int ncols = adjMP->n;
	int* arrayBeginning = adjMP->edgesP;
	*(arrayBeginning + (ncols*row) +col) = 1;
	*(arrayBeginning + (ncols*col) + row) = 1;
}
int getEdge(AdjMat* adjMP, int row, int col)
{
	int ncols = adjMP->n;
	int* arrayBeginning = adjMP->edgesP;
	return *(arrayBeginning + (ncols*row) +col) ;
}

int N, M; 
void createAdjMatrix(int Adj[][N], 
                     int arr[][2]) 
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
#endif

