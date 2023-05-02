#include <stdio.h>
#include <math.h>

int main() {
  int x1, y1, x2, y2, calc;
  float distab;
  scanf("%d", &x1);
  scanf("%d", &y1);
  scanf("%d", &x2);
  scanf("%d", &y2);
  calc = pow((x2-x1),2) + pow((y2-y1),2);
  distab = sqrt(calc);
  printf("A DISTANCIA ENTRE A e B = %.2f\n", distab);
    
return 0;
}
----------------------------------------------------------------------------------------------
#include <stdio.h>

int main() {
  int valor, valornovo, a1, a2, a3, a4;
  scanf("%d", &valor);
  a3 = valor%10;
  a2 = (valor/10)%10;
  a1 = valor/100;
  a4 = (a1 + a2*3 + a3*5)%7;

  valornovo = valor*10 + a4;
  printf("O NOVO NUMERO E = %d\n",valornovo);

  return 0;
}

-----------------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

int main () {
  int x1, y1, x2, y2, calc;
  float distab;
  scanf ("%d", &x1);
  scanf ("%d", &y1);
  scanf ("%d", &x2);
  scanf ("%d", &y2);
  calc = pow((x2-x1),2) + pow((y2-y1),2);
  distab = sqrt(calc);
  printf("A DISTANCIA ENTRE A E B = %.2f\n", distab); \\ .2f para valor decimal com 2 casas
  
  return 0;
}
