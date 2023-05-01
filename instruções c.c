include <stdio.h>
     // 876  876/100 = 8 resto 76
     
     int main () {
     int valor, t100, t50, t10, t1;
     scanf ("%d", &valor); // &valor significa endereço da variável valor, d para valor inteiro, scanf para ler o valor
     t100 = valor/100; //t100 passa a valer 8
     valor = valor%100; // valor passa a valer 76, pois o % pega o resto da divisão de cima
     t50 = valor/50;  //t50 vai valer 1 e terá um resto de 26
     valor = valor%50;
     t10 = valor/10; //t10 vai valer 2 e sobra um resto de 6
     t1 = valor%10;
     printf("NOTAS DE 100 = %d\n", t100); // o \n serve para pular uma linha
     printf("NOTAS DE 50 = %d\n", t50); 
     printf("NOTAS DE 10 = %d\n", t10);
     printf("NOTAS DE 1 = %d\n", t1);
     
     
     
     return 0;
     }
     
     para fórmulas matemáticas, incluir <math.h>
