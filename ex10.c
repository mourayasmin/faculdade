#include <stdio.h>

int main() {
    float valor, f; // float para valores decimais, int para valores inteiros 
    int n;
    scanf("%f", &valor);
    //1 casa decimal
    n = valor*10 + 0.5;
    f = n/10.0;
    printf("%f\n",f);
    n = valor*100 + 0.5;
    f = n/100.0;
    printf("%f\n", f);
    n = valor*1000 + 0.5;
    f = n/1000.0;
    printf("%f\n", f);

    return 0;
}


-------------------------------------------------------------------------------
    
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
