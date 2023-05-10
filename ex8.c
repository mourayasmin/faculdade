#include <stdio.h>
int main (){
  float altura, aresta, volume;
  scanf("%f", &altura);
  scanf("%f", &aresta);
  volume = (aresta*aresta*1.73205*altura*3)/6;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume);
  
  return 0; 
}
