#include <stdio.h>
int main () {
 float a, b, c, d, e, f, x, y;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  scanf("%f", &d);
  scanf("%f", &e);
  scanf("%f", &f);
  y = (a*f - d*c)/(-d*b + a*e);
  x = (e*c - b*f)/(-b*d + e*a);
  printf("O VALOR DE X E = %.2f\n", x);
  printf("O VALOR DE Y E = %.2f\n", y);
 
  return 0;
}
