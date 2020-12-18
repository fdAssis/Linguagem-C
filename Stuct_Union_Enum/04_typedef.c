#include <stdio.h>
#include <stdlib.h>

//criar um sinonimo para inteiro
typedef int inteiro;

struct cad {
  char nome[50], rua[50];
  int idade, numero;
};

typedef struct cad cadastro;

int main() {

  /*Comando typedef:
  permite que o programador deina um 'apelido' para um tipo existente.
  */

  int x = 10;
  inteiro y = 20;

  y = y + x;

  cadastro c1;

  c1.idade = 10;

  system("pause");
  return 0;
}