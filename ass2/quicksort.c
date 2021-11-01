#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b) {
	return ( *(int*)b - *(int*)a );
}

int main(void) {
	int x[][3] = {{3,2,1}, {5,8,7}, {4,9,3}};
		
	qsort(x, 9, sizeof(int), compare);
	
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf (" %2d", x[i][j]);
        putchar ('\n');
    }
    
    return 0;
}
