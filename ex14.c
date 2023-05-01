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
