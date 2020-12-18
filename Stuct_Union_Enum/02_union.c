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

union tipo_2
{
  short int x;
  unsigned char c[2];
};


int main() {

  //declaracao de uma variavel union
  union tipo uni;

  /* 
    Cada campo (variavel) da union pode ser acessado usando o operador de "."
  */
  uni.x = 5;
  uni.c = 'c';

  /* STRUCT vs UNION
    struct: espaco para armazenar todos os seus elementos.
    union: espaco para armazenar APENAS o maior elemento - memoria compartilhada
  */

  /* Por que usar uma union
    1) economia de memoria: se seus campos nunca sao usados ao mesmo tempo, nao
      faz sentido reservar espaco para os dois
  */
  union tipo_2 v;
  v.x = 1392;
  printf("x = %d\n", v.x);

  v.c[0] = 'a';
  v.c[1] = 'b';
  printf("c[0] = %c\n", v.c[0]);
  printf("c[1] = %c\n", v.c[1]);

  /*
    2) manipulacao de bits: uma union permite fazer acessos controlados a nivel
    de bits.
  */
  //Exemplo sem union: 
  short int x = 1323;
  unsigned char c0, c1;

  c0 = 0X00FF & x;
  c1 = x >> 8;
  printf("x = %d\n", x);
  printf("c0 = %d\n", c0);
  printf("c1 = %d\n", c1);

  /*
    Um dos usos mais comum de uma uniao eh unir um tipo basico a um array de tipos
    menores.
  */
  union tipo_2 union_2;
  union_2.x = 1323;
  printf("x = %d\n", union_2.x);
  printf("c[0] = %d\n", union_2.c[0]);
  printf("c[1] = %d\n", union_2.c[1]);

  system("pause");

  return 0;
}