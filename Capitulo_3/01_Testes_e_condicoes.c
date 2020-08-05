#include <stdio.h>

void main() {

/*
* Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, 
* aplique todos os operadores relacionais de C aos inteiros lidos.
*/
  int valorX, valorY;

  printf("Digite dois inteiros: ");
  scanf("%d%d", &valorX, &valorY);

  printf("O resultado de %d == %d : %d\n", valorX, valorY, valorX == valorY);
  printf("O resultado de %d >  %d : %d\n", valorX, valorY, valorX >  valorY);
  printf("O resultado de %d <  %d : %d\n", valorX, valorY, valorX <  valorY);
  printf("O resultado de %d >= %d : %d\n", valorX, valorY, valorX >= valorY);
  printf("O resultado de %d != %d : %d\n", valorX, valorY, valorX != valorY);


}