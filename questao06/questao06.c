#include <stdio.h>
#include <stdlib.h>

int main(){
	int *pulo, i;
	pulo = malloc(5 *sizeof(int));
	for(i=0; i<5; i++){
		pulo[i] = i + 1;
	}
	printf("%d \n", *(pulo + 2));
	printf("%d \n", *(pulo + 4));
	printf("%d \n", pulo + 4);
	printf("%d \n", pulo + 2);
	return 0;
}