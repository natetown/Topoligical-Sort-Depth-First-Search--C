#include "my.h"
void breadthFirstSearch(VERTEX* vArr, int count, int level, VERTEX* s){
			EDGE* e;
			e = s->p;
		printf("%c", s->c);
		s->isVisited = true;
		level++;
while(e != NULL){

	if(e->v->isVisited == false){
	printf("%c", e->v->c);
	e->v->isVisited = true;
	}
	e = e->q;
}
}