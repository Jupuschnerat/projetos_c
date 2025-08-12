#include <stdio.h>

int main() {
  int numero;

  printf("Digite um número: \n");
  scanf("%d", &numero);

  if (numero > 0 ) {
    if (numero % 2 == 0){
      printf("número par.\n");
    } else {
      printf("número impar.\n");
    }
  } else if (numero == 0) {
    printf("número é zero\n");
    } else {
      printf("negativo\n");
    }

}
