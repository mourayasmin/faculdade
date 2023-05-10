#include <stdio.h>
int main (){
  int horas, minutos, segundos, tempo;
  scanf("%d", &horas);
  scanf("%d", &minutos);
  scanf("%d", &segundos);
  tempo = (horas*60*60) + (minutos*60) + (segundos);
  printf("O TEMPO EM SEGUNDOS E = %d\n", tempo);
  
  return 0;
}
