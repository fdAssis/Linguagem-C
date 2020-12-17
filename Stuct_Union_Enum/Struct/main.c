#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"

int main()
{

  Pessoa *p;

  p = criarPessoa("Francisco", "Av.Maranha", 23, 404);

  printPessoa(p);

  system("pause");

  return 0;
}