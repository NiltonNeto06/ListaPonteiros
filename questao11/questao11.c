#include <stdio.h>
int main(){
float aloha[10], coisas[10][5], *pf, value = 2.2;
int i=3;
aloha[2] = value;
scanf("%f", &aloha);
printf("%f \n", aloha);
printf("%f \n", aloha[2]);
coisas[4][4] = aloha[3];
printf("%d \n", coisas[4][4]);
pf = aloha;
printf("%f \n", pf);
return 0;
}