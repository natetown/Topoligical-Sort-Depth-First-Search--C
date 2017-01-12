#include "my.h"
void resetList(VERTEX* vArr, int count){
	int i;
	for(i=0; i<count; i++){

		vArr[i].isVisited = false; //the vertex
		//for each edge print it then ->
		if (vArr[i].p!=NULL){
			vArr[i].p->v->isVisited = false;
	
			EDGE* e;
			e = vArr[i].p->q;

			while(e != NULL){
				e->v->isVisited = false;
				e = e->q;

			}
		}
	}
}