#include "my.h"
void addToList(EDGE* e, VERTEX* v){
if (v->p == NULL){
	v->p = e;
}
else{
EDGE* n;
n=v->p;
while(n->q!= NULL){
n=n->q;
}
n->q = e;
}

}
