/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() { 
    int n1, n2, n3, res;
    scanf("%d, %d, %d", &n1, &n2, &n3);
    if((n1>=0)&&(n1<10)&&(n2>=0)&&(n2<10)&&(n3>=0)&&(n3<10))
      { res = n1*100 + n2*10 + n3;
      printf("%d, %d\n", res, res*res);
      }else printf ("DIGITO INVALIDO\n");
    return 0;
}

