#include <stdio.h>
int main () {
  int conta;
  double consumo, valor;
  char tipo, R, I, C;
  scanf("%d", &conta);
  scanf("%f", &consumo);
  scanf("%c", &tipo);
    if (tipo == 'R'){
    valor = (5 + 0.05*consumo);
    }
    if (tipo == 'C'){
      if (consumo > 80) {
        valor = (500 + 0.25*(consumo - 80));
       }
      else {
      valor = 500;
      }
      }
    if (tipo == 'I'){
      if (consumo > 100){
        valor = (800 + 0.04*(consumo - 100));
      }
      else {
        valor = 800;
        }
    }
  printf("CONTA = %d", conta);
  printf("VALOR DA CONTA = %.2f", valor);
      
  return 0;
  }

