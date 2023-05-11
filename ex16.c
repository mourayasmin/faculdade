#include <stdio.h>
int main (){
  int n, n1, n2, n3, n4, n5, n6, n7, n8;
  scanf("%d", &n);
    if (n < 0 || n > 255) {
      printf("Numero invalido!");
  }
    else {
  n1 = (n)%2; 
  n2 = (n/2)%2;
  n3 = (n/4)%2;
  n4 = (n/8)%2; 
  n5 = (n/16)%2;
  n6 = (n/32)%2;
  n7 = (n/64)%2;
  n8 = (n/128)%2;
  printf("%d%d%d%d%d%d%d%d",n8, n7, n6, n5 , n4, n3, n2, n1);
  }
  
 return 0; 
}
