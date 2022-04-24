#include <stdio.h>
#include  <stdlib.h>
#include <math.h>

int calc_hipot(int cat1, int cat2);

int cat1, cat2, h;

int main(void) {
  printf("Digite o valor do cateto 1\n");
  scanf("%i", &cat1);
  printf("Digite o valor do cateto 2\n");
  scanf("%i", &cat2);

  h = calc_hipot(cat1,cat2);

  printf("O valor da hipotenusa e igual a %i", h);
    return 0;
}

int calc_hipot(int cat1, int cat2){
  h = pow(cat1,2) + pow(cat2,2);

  return h;
}
