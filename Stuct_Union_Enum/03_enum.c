#include <stdio.h>
#include <stdlib.h>

enum semana {
  Domingo, Segunda, Terca,
  Quarta, Quinta, Sexta,
  Sabado
};

enum escapes {
  retrocesso = '\b',
  tabulacao = '\t',
  novalinha = '\n'
};

int main() {

  /*
    Uma enumeracao pode ser vista como uma lista de constantes, onde cada constante
    possui um nome significativo.
  */

  enum semana s1, s2, s3;
  s1 = Segunda; // 1
  s2 = Terca;   // 2
  s3 = s1 + s2; // 1 + 2

  printf("Domingo = %d\n", Domingo);
  printf("s1 = %d\n", s1);
  printf("s2 = %d\n", s2);
  printf("s3 = %d\n", s3);
  if (s3 == Quarta)
    printf("s3 igual a Quarra\n");


  /*
    Pode-se atribuir valores da tabela ASCII para a enumeracao
  */
  enum escapes e = novalinha;
  printf("Teste %c de %c escrita\n", e, e);

  e = tabulacao;
  printf("Teste %c de %c escrita\n", e, e);

  system("pause");
  return 0;
}