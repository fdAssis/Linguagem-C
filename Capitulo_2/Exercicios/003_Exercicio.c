/* Algoritmo "mario" para desenhar blocos com # */
#include <stdio.h>

void main() {

  int largura; 

  printf("Largura: ");
  scanf("%i", &largura);

  desenha(largura);

}

void desenha(l) {

  if(l == 0) {
    return 0;
  }

  desenha(l-1);

  for(int i = 0; i < l; i++) {
    printf("#");
  }
  printf("\n");

}