#include <stdio.h>
#include <stdlib.h>

/*
  A linguem C permite tambem criar nosso proprios tipos de variaveis.
  Alem da struct, podemos criar uma union 
  tambem chamada de UNIAO
*/

union tipo {
  short int x;
  unsigned char c;
};

int main() {

  //declaracao de uma variavel union
  union tipo uni;

  /* 
    Cada campo (variavel) da union pode ser acessado usando o operador de "."
  */
  uni.x = 5;
  uni.c = 'c';

  /*
    STRUCT vs UNION
    struct: espaco para armazenar todos os seus elementos.
    union: espaco para armazenar APENAS o maior elemento - memoria compartilhada
  */

  system("pause");

  return 0;
}