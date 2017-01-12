#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//All function prototypes
struct EDGETAG;

typedef struct
{
    char c;
    bool isVisited;
    struct EDGETAG* p;
}VERTEX;


typedef struct EDGETAG
{
    VERTEX* v;
    struct EDGETAG* q;
}EDGE;

VERTEX* makeList(char* argv[]);
bool inArray(char c, char* argv, int nelems);
int findVertex(VERTEX* vArr, char first, int count);
void addToList(EDGE* e, VERTEX* v);
void printAdjacencyList( VERTEX* vArr,int count);
int computeArraySize(char* argv[]);
char returnFirst(char * argv[]);
int topologicalSort(VERTEX* vArr, int count, VERTEX* s); 
void dfsVisit(VERTEX* vArr, int count, VERTEX* s);
void resetList(VERTEX* vArr, int count);
void breadthFirstSearch(VERTEX* vArr, int count, int level, VERTEX* s);

/* Here are the functions your program should call with no prompts whatsover:
a. Print the graph as  adjacency lists (see Table 13.2).  (If you get this properly for
adjacency lists you earn  an 85.)
b. Call the depth first search. (5 more points.)
c. Call the breadth first search. (5 more points.)
d. Call the topological sort (you may assume there are 
no cycles--see pg. 654) (5 more points.)
*/