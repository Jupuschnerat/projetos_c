#include <stdio.h>

int main() {
  float renda;
  int idade;
  int dependentes;

  printf("Digite sua idade: \n");
  scanf("%d", &idade);
  printf("Digite sua renda mensal: \n");
  scanf("%f", &renda);
  printf("Digite o número de dependentes: \n");
  scanf("%d", &dependentes);

  if (idade >= 18 || idade < 65) {
    if (renda < 3000) {
      if (dependentes > 2) {
        printf("Você atende a todos os critérios.\n");
      } else {
        printf("Você não atende ao critério dependente.\n");
      }
    } else{
      printf("Você não atende ao critério renda.\n");
    }
  } else {
    printf("Você não atende ao critério idade.\n");
  }
}
