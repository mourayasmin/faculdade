#include <stdio.h>
int main () {
  float salario, kw, r, rr, rrr;
  scanf("%.2f %.2f", &salario, &kw);
   r = (salario*0,007);
   rr = (salario*0,007*kw);
   rrr = (salario*0,007*kw*0,9);    
   printf("Custo por kw: R$%.2f\n", r);
   printf("Custo do consumo: R$%.2f\n", rr);
   printf("Custo com desconto: R$%.2f\n", rrr);
   
  return 0;
}
----------------------------------------------------------------------------------


#include <stdio.h>
int main () {
  float salario, kw, r, rr, rrr;
  scanf("%.2f %.2f", &salario, &kw);
   r = (salario*(7/1000));
   rr = (salario*(7/1000)*kw);
   rrr = (salario*(7/1000)*kw*(9/10));    
   printf("Custo por kw: R$%.2f\n", r);
   printf("Custo do consumo: R$%.2f\n", rr);
   printf("Custo com desconto: R$%.2f\n", rrr);
   
  return 0;
}
