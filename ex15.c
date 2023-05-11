#include <stdio.h>
int main (){
  int n0, n1, n2, n3, novo;
  scanf("%d", &n0);
  n1 = (n0/100);
  n2 = (n0)/(n0/2); 
  n3 = (n0 - n1*100 - n2*10); 
  novo = (n1*1000 + n2*100 + n3*10) + (n1 + n2*3 + n3*5)%7; 
  printf("O NOVO NUMERO E = %d\n", novo);
  
return 0;
}
