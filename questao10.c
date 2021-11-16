#include <stdio.h>

int main(){
	char x[4];
	int y[4];
	float w[4];
	double z[4];
for(int i = 0; i < 4; i++){
	printf("X[i] = %d \n", &x[i]);
	printf("%d \n", &y[i]);
 	printf("%d \n", &w[i]);
	printf("%d \n", &z[i]);
}
return 0;
}