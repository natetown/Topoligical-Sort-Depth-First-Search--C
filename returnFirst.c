#include "my.h"
char returnFirst(char * argv[]){
	FILE *fp = fopen(argv[1], "r");
		if (fp != NULL){
			char c = fgetc(fp);
			while (c!= EOF){
			if (c >= 'A' && c <= 'Z'){
				return c;
			}
			else {
				c = fgetc(fp);
			}
		}
		}
}