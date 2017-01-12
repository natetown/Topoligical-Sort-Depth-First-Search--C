#include "my.h"
int computeArraySize(char* argv[]){

FILE *fp = fopen(argv[1], "r");
		if (fp != NULL){
		size_t charSize = sizeof(char);
		char *a;
		int i = 0;
		int j = 0;
		
		//Read Array into memory from file
		char c;
		while(c != EOF){
		c = fgetc(fp);
		if (c >= 'A' && c <= 'Z'){
		i++;
		}
	}
	  rewind(fp);
//create array for non-dupped chars
		a = calloc(i, charSize);
//fill array
		char d;
		while(d != EOF){
		d = fgetc(fp);
		if (d >= 'A' && d <= 'Z' && !inArray(d, a, j)){
		a[j] = d;
		//printf("%c", a[j]);
		j++;
		}
	}
	//printf("\n");
		rewind(fp);

		return j;

}

}
