#include <stdio.h>

int main(){
	int mat[4];
	int *p, x;
	p = mat + 1;
	x = (*mat)++;
printf("%d \n", p);
printf("%d \n", x);
return 0;
}