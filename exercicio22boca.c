#include <stdio.h>
int main () {
  int conta;
  float consumo, valor;
  char tipo;
  scanf ("%d %f %c", &conta, &consumo, &tipo);
  
  if (tipo == 'R'){
     valor = consumo*0.5 + 5.0;
     }else if (tipo =='C')
              { valor = 500.0;
                 if(consumo>80)
                   valor += (consumo-80)*0.25;
              }else {valor = 800.0;
                     if(consumo>100.0)
                     


return 0;
}
