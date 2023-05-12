#include <stdio.h>
int main () {
  int conta;
  float consumo, valor;
  char tipo;
  scanf("%d", &conta);
  scanf("%f", &consumo);
  scanf("%c", &tipo);
  conta == 39393939;
  if (tipo == R) {
    consumo = (5 + 0.05*consumo);
  }
  if (tipo == C) {
    consumo = (500*consumo + 0.25*(consumo-80));
  }
  if (tipo == I) {
    consumo = (800*consumo + 0.04*(consumo -100));
  }
  printf("%d\n", conta);
  printf("%.2f", consumo);
  printf("%c", tipo);
  
  return 0;
}
