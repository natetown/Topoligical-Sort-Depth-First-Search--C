#include "my.h"
int findVertex(VERTEX* vArr, char first, int count){
	int i;
	for (i = 0; i<count; i++){

		if(first==vArr[i].c){
			return i;
		}
	}
	return -1;

}