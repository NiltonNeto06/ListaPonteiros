#include <stdio.h>
// Resultado obitido na ordem:
// i = 0vet[0] 1.1*(f + 0) = 1.1&vet[0] = 83FF9A0(f + 0) = 83FF9A0
// i = 1vet[1] 2.2*(f + 1) = 2.2&vet[1] = 83FF9A4(f + 1) = 83FF9A4
// i = 2vet[2] 3.3*(f + 2) = 3.3&vet[2] = 83FF9A8(f + 2) = 83FF9A8
// i = 3vet[3] 4.4*(f + 3) = 4.4&vet[3] = 83FF9AC(f + 3) = 83FF9AC
// i = 4vet[4] 5.5*(f + 4) = 5.5&vet[4] = 83FF9B0(f + 4) = 83FF9B0

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\ni = %d",i);
  printf("vet[%d] = %.1f",i, vet[i]);
  printf("*(f + %d) = %.1f",i, *(f+i));
  printf("&vet[%d] = %X",i, &vet[i]);
  printf("(f + %d) = %X",i, f+i);
  }
  return 0;
}