#include "my.h"
VERTEX* makeList(char* argv[]){
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
		j++;
		}
	}
		rewind(fp);
//count how many elements in the array
		int newCount;
		int k;
		for(k = 0; k < i; k++){
			char h;
			h = a[k];
			if( h >= 'A' && h <= 'Z'){
				newCount++;
			}
		}

	    char arae[newCount];
		int araeNElems = 0;
		int q;
		for(q = 0; q < i; q++){
			char e;
			e = a[q];
			if( e >= 'A' && e <= 'Z'){
				arae[araeNElems] = e;
				araeNElems++;
			}
		}
//create the struct array with newCount as the count
VERTEX* vArr;
vArr = calloc(newCount, sizeof(VERTEX));
//add the vertexes to the vertex array
int b;
for (b = 0; b<araeNElems; b++){
	char p;
	p = arae[b];
	vArr[b].isVisited = false;
	vArr[b].c = p;
	vArr[b].p = NULL;
	//printf("%s\n", vArr[b]->isVisited);
//	printf("%c\n", vArr[b].c);
//	printf("%d\n", &vArr[b].p);
//	printf("%d\n", vArr[b].isVisited);
	//printf("%s\n", vArr[b]->p);
}

		
	 	
/////////////////////////////////////////////////////////////////////////////////Create edges
		char first;
		char second;
		char test;
		
		while( test != EOF){
		test = fgetc(fp);
		if (test >= 'A' && test <= 'Z'){
		first = test;
		test=fgetc(fp);
			while(test < 'A' || test > 'Z'){
			test=fgetc(fp);
			}
			second = test;
			
			//////////////////////////////////////////
			//create edge
			int index = findVertex(vArr, first, araeNElems);
			int index2 = findVertex(vArr, second, araeNElems);
			EDGE* zz = malloc(sizeof(EDGE));
			zz->v = &vArr[index2];
			zz->q = NULL;
			//add edge to vertexlist
			addToList(zz, &vArr[index]);
			//Create an edge between first vertex and second vertex
			//////////////////////////////////////////
		}	
	}
/////////////////////////////////////////////////////////////////////////////////print Adjacency List

printAdjacencyList(vArr, araeNElems);	



return vArr;
/////////////////////////////////////////////////////////////////////////////////
	}
	else{
		printf ("Shit. no good");
	}
}