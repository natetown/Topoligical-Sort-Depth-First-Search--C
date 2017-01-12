#include "my.h"
int topologicalSort(VERTEX* vArr, int count, VERTEX* s){

			EDGE* e;
			e = s->p;
		
while(e != NULL){
/*	if(s->isVisited == false){
		printf("%c", s->c);
		s->isVisited = true;
	}
/*	if(e->v->isVisited == false){
	printf("%c", e->v->c);
	e->v->isVisited = true;
	}
*/
	topologicalSort(vArr, count ,&vArr[findVertex(vArr, e->v->c, count)]);
	e = e->q;
}


if(s->isVisited == false){
	printf("%c", s->c);
	s->isVisited = true;
	}
}