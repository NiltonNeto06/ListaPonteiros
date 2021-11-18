#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
int comparador(const void *a, const void *b){ 
   return ( *(float*)a - *(float*)b ); 
}

int comparador2(const void *a, const void *b){ //compara o valores de A e B, que serão definidos depois, e divide ele em três categorias:
   if (*(float*)a > *(float*)b){
      return 1;
   } else if (*(float*)a < *(float*)b) {
      return -1;
   } else {
      return 0;
   }
}

int main(){
  float *n; 
  int i, j, aux, tam;
  
  printf("Informe o numero n de componentes do vetor\n");
  scanf("%d", &tam);
  
  n = (float *) malloc(tam * sizeof(float));
  
  for (i = 0; i < tam; i++){
    printf("\nDigite um valor para o vetor: ");
    scanf("%f",&n[i]);
  }
  
  qsort(n, tam, sizeof(float), comparador); //ordena o vetor de forma crescente;
  
  for(i = 0; i < tam; i++){
   printf("%.2f\n",n[i]);
  }
  

  free(n); //libera o espaço ocupado em n;
  
  getch();
  return 0;
}