
#ifndef TESTS_H_
#define TESTS_H_
#ifndef ADJMAT_H_
#define ADJMAT_H_
#ifndef PRODUCTION_H_
#define PRODUCTION_H_
#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>//strncpy
#include <stdlib.h>//strtol
#ifndef TESTS_H_
#define TESTS_H_

#define FILENAMELENGTHALLOWANCE 50


typedef struct
{
	int n;
	int* edgesP;
}AdjMat;

typedef struct
{
	int roomNumber;
	float treasure;
}SearchResults;
typedef Room Payload;
typedef SearchResults Payload2;
struct LLNode;
typedef struct
{
	struct LLNode* next;
	struct LLNode* prev;
	Payload* payP;
}LLNode;
typedef struct
{
	struct LLNode2* next;
	struct LLNode2* prev;
	Payload2* payP;
}LLNode2;

typedef struct
{
	Payload* mp;
	LLNode* newQHead;
}backFromDQFIFO;


void setEdge(AdjMat* adjMP, int row, int col);
int getEdge(AdjMat* adjMP, int row, int col);
void init(AdjMat* adjMP);
bool tests();
bool testReadFile();
bool testGotAdjacencyMatrix();
bool testMakeLList();
bool testEnqueue();
bool testRemoveFromList();
bool testPrintHistory();
LLNode* makeEmptyLinkedList();
LLNode2* makeEmptyLinkedList2();
LLNode* removeFromList(LLNode* hp, Payload* pP);
void savePayload(LLNode* lp, Payload* mp);
void savePayload2(LLNode2* lp, Payload2* mp);
bool isEmpty(LLNode* lp);
Payload* dequeueLIFO(LLNode* lp);
backFromDQFIFO* dequeueFIFO(LLNode* lp);
void printHistory(LLNode2* hp);
bool production(int argc, char* argv[]);
bool readFile(char* filename, int* nrooms, AdjMat* adjMP, Room** theRoomPs);
void displayBoard();
bool tests();

bool testReadFile();
bool testGotAdjacencyMatrix();
bool testMakeLList();
bool testEnqueue();
bool testRemoveFromList();
bool testPrintHistory();


#endif /* TESTS_H_ */
#endif
#endif
#endif


