#include "my.h"
bool inArray(char c, char* argv, int nelems){
//loop
	//if found, return true
	//if reach end and not found, return false
	int i;
	char d;
	for (i = 0; i<nelems; i++){
		d = argv[i];
		if(c == d){
			return true;
		}
	}
	return false;
}