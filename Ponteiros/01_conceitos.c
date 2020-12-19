#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    Podnteiros nao inicaliados apontam para um lugar indefinido.
  */
  //int *p;

  /*
    Um ponteiro pode ter um valor especial NULL que eh o endereco de nenhum lugar.
  */
  //int *p = NULL;

  /*
    Podemos apontar o ponteiro para uma variavel
    que ja existe no nosso programa.
  */
  int x = 10;
  int *p;

  //Ponteiro p aponta para a variavel x.
  p = &x;
  printf("x = %d\n", x);
  printf("&x = %d\n", &x);
  printf("p = %d\n", p);
  printf("*p = %d\n", *p);

  /*
    O operador asterisco (*) permite modificar o conteudo da posicao
    da memoria apontada.
  */
  *p = 12;
  printf("x = %d\n", x);

  system("pause");
  return 0;
}