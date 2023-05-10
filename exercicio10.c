#include <stdio.h>
int main (){
   float valor, resposta;
   int inteiro;
   
   scanf("%f", &valor);
   
   inteiro = (valor*10.0 + 0.5); // 10.0 para que a divisão seja fracionária
   resposta = (inteiro/10.0);
   printf("%.6f\n", resposta);
   
   inteiro = (valor*100.0 + 0.5);
   resposta = (inteiro/100.0);
   printf("%.6f\n", resposta);
   
   inteiro = (valor*1000.0 + 0.5);
   resposta = (inteiro/1000.0);
   printf("%.6f\n", resposta);
  
  return 0;
}

