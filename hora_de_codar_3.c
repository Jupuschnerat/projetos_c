#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int escolhaJogador, escolhaComputador;
  srand(time(0));

  printf("Jogo de Jokenpô\n");
  printf("Escolha uma opção: \n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha\n");
  scanf("%d", &escolhaJogador);

  escolhaComputador = rand() % 3 + 1;

  switch(escolhaJogador) {
    case 1:
      printf("Jogador: pedra - \n");
      break;
    case 2:
      printf("Jogador: papel - \n");
      break;
    case 3:
      printf("Jogador: tesoura - \n");
      break;
    default:
      printf("Opção inválida\n");
      break;


  }

    switch(escolhaComputador) {
    case 1:
      printf("Computador: pedra - \n");
      break;
    case 2:
      printf("Computador: papel - \n");
      break;
    case 3:
      printf("Computador: tesoura - \n");
      break;
  }

  if(escolhaComputador == escolhaJogador) {
    printf("Empate\n");
  } else if ((escolhaJogador == 1) && (escolhaComputador == 3) || (escolhaJogador == 2) && (escolhaComputador == 1) || (escolhaJogador == 3) && (escolhaComputador == 2)){
    printf("Parabéns, você venceu!\n");
  } else {
    printf("Você perdeu!\n");
  }
  return 0;

}
