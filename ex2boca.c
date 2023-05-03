#include <stdio.h>
int main () {
  int salario;
  float kW, r, rr, rrr;
  scanf("%d %f", &salario, &kW); //entrada: f; saída: .2f
   r = (salario*0.007);
   rr = (salario*0.007*kW);
   rrr = (salario*0.007*kW*0.9);    
   printf("Custo por kW: R$%.2f\n", r);
   printf("Custo do consumo: R$%.2f\n", rr);
   printf("Custo com desconto: R$%.2f\n", rrr); 
   
  return 0;
}
