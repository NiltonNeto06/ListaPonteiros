#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
int main(void)
{
  float *n; 
  int i, j, aux, tam;
  
  printf("Informe o numero n de componentes do vetor\n");
  scanf("%d", &tam);
  
  n = (float *) malloc(tam * sizeof(float));
  
  for (i = 0; i < tam; i++)
  {
    printf("\nDigite um valor para o vetor: ");
    scanf("%f",&n[i]);
  }
  
  
  for (i = 0;i < tam; i++)
  {
    for(j = i+1; j < tam; j++){
      if(n[i] > n[j]){
        aux = n[i];
        n[i] = n[j];
        n[j] = aux;
      }
    }
  }
  for(i = 0; i < tam; i++){
   printf("%.2f\n",n[i]);
  }
  

  free(n);
  
  getch();
  return 0;
}