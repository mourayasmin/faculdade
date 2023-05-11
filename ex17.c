#include <stdio.h>
int main () {
  int n, n1, n2, n3;
  scanf("%d", &n);
  n1 = (n/100); //1
  n2 = (n/10 - n1*10);
  n3 = (n - n1*100 - n2*10);
  printf("%d%d%d\n", n3, n2, n1);
  
 return 0; 
}
