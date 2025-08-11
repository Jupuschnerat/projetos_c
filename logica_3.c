#include <stdio.h>

int main() {
  int idade = 20;
  float altura = 1.75;

  // idade >= 18 -> verdadeira
  // idade <= 30 -> verdadeira
  // verdadeira && verdadeira
  // verdadeira && altura > 1.70
  // verdadeiro && verdadeiro -> verdadeiro

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem altura adequada.\n");
  } else {
    printf("Você não atende os critérios.\n");
  }
}
