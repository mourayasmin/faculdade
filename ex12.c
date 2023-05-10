#include <stdio.h>
int main (){
  float fabrica, distribuidor, impostos;
  scanf("%f\n", &fabrica);
  scanf("%f\n", &distribuidor);
  scanf("%f", &impostos);
  fabrica = (fabrica) + (fabrica*distribuidor)/100 + (fabrica*impostos)/100;
  printf("O VALOR DO CARRO E = %.2f\n", fabrica);
  
  return 0;
}
