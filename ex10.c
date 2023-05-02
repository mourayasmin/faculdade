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
