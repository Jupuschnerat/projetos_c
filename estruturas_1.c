#include <stdio.h>

int main(){

  int nota;

  printf("Digite sua nota:\n");
  scanf("%d", &nota);

  if (nota >= 90) {
    printf("Conceito é A.\n");
  } else if (nota >= 80) {
    printf("Conceito é B.\n");
  } else if (nota >= 70) {
    printf("Conceito é C.\n");
  } else if (nota >= 60) {
    printf("Conceito é D.\n");
  } else if (nota >= 50) {
    printf("Conceito é E.\n");
  } else {
    printf("Conceito é F.\n");
  }

}
