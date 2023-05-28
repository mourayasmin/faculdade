#include <stdio.h> 
int main () {
    int n1, n2, n3, n4, resultado;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
if ((n1 > n2)&&(n1 > n3)&&(n1 > n4)); {
    resultado = n2 + n3 + n4;
    printf("%d", resultado);
}
if ((n2 > n1)&&(n2 > n3)&&(n2 > n4)) {
    resultado = n1 + n3 + n4;
    printf("%d", resultado);
}
((n3 > n1)&&(n3 > n2)&&(n3 > n4)) {
    resultado = n1 + n2 + n4;
    printf("%d", resultado);
}
if ((n4 > n1)&&(n4 > n2)&&(n4 > n3)) {
    resultado = n1 + n2 + n3;
    printf("%d", resultado);
}
    return 0;
}
