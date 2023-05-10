#include <stdio.h>
int main () {
  double massa, aceleracao, tempo, vm, vk, comprimento, trabalho;
  scanf("%lf\n", &massa);
  scanf("%lf\n", &aceleracao);
  scanf("%lf", &tempo);
  vk = (aceleracao*tempo*3.6);
  vm = (aceleracao*tempo);
  comprimento = (aceleracao*tempo*tempo)/2;
  trabalho = (massa*1000*vm*vm)/2;
  printf("VELOCIDADE = %.2f\n", vk);
  printf("ESPACO PERCORRIDO = %.2f\n", comprimento);
  printf("TRABALHO REALIZADO = %.2f\n", trabalho);

  return 0;
}
