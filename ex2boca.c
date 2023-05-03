#include <stdio.h>
int main () {
  int salario;
  float kw, r, rr, rrr;
  scanf("%d %f", &salario, &kw); //entrada: f; saída: .2f
   r = (salario*0.007);
   rr = (salario*0.007*kw);
   rrr = (salario*0.007*kw*0.9);    
   printf("Custo por kw: R$%.2f\n", r);
   printf("Custo do consumo: R$%.2f\n", rr);
   printf("Custo com desconto: R$%.2f\n", rrr); 
   
  return 0;

