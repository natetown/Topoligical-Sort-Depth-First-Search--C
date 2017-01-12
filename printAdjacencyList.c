#include "my.h"
void printAdjacencyList( VERTEX* vArr,int count){
	int i;
	printf("Vertex    List Containing Adjacent Vertices\n");
	for(i=0; i<count; i++){

		printf("%c         ", vArr[i].c ); //the vertex
		//for each edge print it then ->
		if (vArr[i].p!=NULL){
			printf("%c", vArr[i].p->v->c);
				if(vArr[i].p->q != NULL){
					printf(" -> ");
				}
			EDGE* e;
			e = vArr[i].p->q;

			while(e != NULL){
				printf("%c", e->v->c);
				if(e->q != NULL){
					printf(" -> ");
				}
				e = e->q;

			}
		}
			printf("\n");
	}
}