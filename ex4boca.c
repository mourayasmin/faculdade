#include <stdio.h>
int main () {
  float raio, altura, preço;
  scanf("%f %f", &raio, &altura);
  preço = (((2*3.14159*raio*raio) + (2*3.14159*raio*altura))*100);
  printf("O VALOR DO CUSTO E = %.2f\n", preço);
 
  return 0;
}
