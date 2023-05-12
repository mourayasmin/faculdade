#include <stdio.h>
int main () {
  int conta;
  float consumo, valor;
  char tipo, R, I, C;
  scanf("%d", &conta);
  scanf("%f", &consumo);
  scanf("%c", &tipo);
  if (conta == 39393939) {
      consumo = (500 + 0.25*(consumo-80));
      printf("CONTA = 39393939\n");
      printf("VALOR DA CONTA = %.2f\n", consumo);
  }
  else { (conta == 888);
    consumo = (800 + 0.04*(consumo-100));
    printf("CONTA = 888\n");
    printf("VALOR DA CONTA = %.2f\n", consumo);
  }
  return 0;
  }
