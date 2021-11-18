#include <stdio.h>

int main(){
int numero = 15;
int *p;

printf("Numero que sera armazenado: %d \n", numero);
printf("Endereco do numero no sistema hexadecimal: %x \n", &numero);
return 0;
}