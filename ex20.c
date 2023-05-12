#include <stdio.h>
int main () {
  float n1, n2, n3, media;
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);
  media = (n1+n2+n3)/3;
  if (media >= 6) {
    printf("MEDIA = %.2f\n", media);
    printf("APROVADO\n");
  }
  else {
      printf("MEDIA = %.2f\n", media);
      printf("REPROVADO\n");
  }
 return 0; 
}
