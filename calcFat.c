#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calc_fat(int num);

int r, n, p, op;

int main(void) {
  
  printf("Escolha uma opcao\n (1) - Arranjo\t(2)-Combinacao\n");
  scanf("%i", &op);

  switch(op){
    case 1:
  printf("Digite o valor de n\n");
  scanf("%i", &n);
  printf("Digite o valor de p\n");
  scanf("%i", &p);
  if(p <= n){
  r = calc_fat(n)/calc_fat(n-p);
printf("Arranjo de %i por %i e igual a %i", n, p, r);
  break;
  }else
    printf("ERRO");
    break;
  case 2:
  printf("Digite o valor de n\n");
  scanf("%i", &n);
  printf("Digite o valor de p\n");
  scanf("%i", &p);
  if(p <= n){
  r = calc_fat(n)/(calc_fat(p)*calc_fat(n-p));
printf("Combinacao de %i por %i e igual a %i", n, p, r);
  break;
  }else
    printf("ERRO");
    break;
  default:
  printf("ERRO");

    return 0;
}

}
int calc_fat(int num){
  int fat = 1;
  for(int i=2;i<=num;i++)
        fat *= i;
  return (fat);

}
