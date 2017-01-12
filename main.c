// Nathan Wheeler N00871989@unf.edu
#include "my.h"
main(int argc, char* argv[])
{	

	if (argc != 2)
	{
		printf("Incorrect syntax. Format: programName fileName\n");
	}

	else
	{
    VERTEX* arr = makeList(argv);
    int i = computeArraySize(argv);
    char c = returnFirst(argv);
    printf("Depth-First Search\n");
    dfsVisit(arr, i, &arr[findVertex(arr, c, i)]);
    printf("\n");
    resetList(arr, i);
    int o = 0;
    printf("Breadth-First Search\n");
    breadthFirstSearch(arr, i, o, &arr[findVertex(arr, c, i)]);
    resetList(arr, i);
    printf("\n");
    printf("Topological Sort (It's backwards)\n");
    topologicalSort(arr, i, &arr[findVertex(arr, c, i)]);
    printf("\n");
	}	
}
