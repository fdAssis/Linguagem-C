// Inclue as funcoes de entrada e saida
#include <stdio.h>

void main(){
  printf("Ola Mundao\n");

  puts("Eita Mundao");
 // As duas funções são iguais, porém a função puts() adiciona uma quebra de linha, igual a printf("\n")
 /*
   !! Porem ao usar o puts() temos de ter noção que apenas imprime a string, 
   não temos o controlo do printf() em que podemos imprimir algo como printf("int: %d, float: %f", x, y)
 */ 
  system("pause");
}