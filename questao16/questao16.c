#include <stdio.h>
#include <stdlib.h> 
#include <conio.h>
#include<time.h>
int main(void)
{
  clock_t Ticks[2];
    Ticks[0] = clock();
    
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
    Ticks[1] = clock();
    double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
    printf("Tempo gasto: %g ms. \n", Tempo);
    getchar();
  

  free(n);
  
  getch();
  return 0;
}
