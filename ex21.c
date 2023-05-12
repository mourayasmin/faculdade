#include <stdio.h>
int main () {
  int n1, n2, n3, n, q;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  n = (n1*100 + n2*10 + n3);
  q = (n*n);
  if (n1>9 || n2>9 || n3>9) {
      printf("DIGITO INVALIDO\n");
  } 
  else {
  printf("%d, %d", n, q);
  }
  
 return 0; 
}
