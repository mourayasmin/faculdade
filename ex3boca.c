#include <stdio.h>
int main () {
  int fahrenheit, polegada;
  scanf("%f %f", &fahrenheit, &polegada);
  fahrenheit = (5*(fahrenheit-32)/9);
  polegada = (polegada*25.4);
  printf("O VALOR EM CELSIUS = %.2f", fahrenheit);
  printf("A QUANTIDADE DE CHUVA E = %.2f", polegada);

return 0;
}
