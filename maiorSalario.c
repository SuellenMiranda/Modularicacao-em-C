#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float verificar_sal(float sal1, float sal2);

int r;
float sal1, sal2;

int main() {
  printf("Digite o salario 1");
  scanf("%f", &sal1);
  printf("Digite o salario 2");
  scanf("%f", &sal2);

  r = verificar_sal(sal1,sal2);

  if(r == 1){
    printf("O maior salario é %.2f\t\n", sal1);
  }else if (r == 2){
    printf("O maior salario é %.2f\t\n", sal2);
  }

    return 0;
}

float verificar_sal(float sal1,float sal2){
  if(sal1 > sal2){
    return 1;
  }else if(sal2 > sal1){
    return 2;
  }
}
