#include <stdio.h>
#include <stdlib.h>

int main()
{

  /*
    Atribuicao: um ponteiro so pode receber o endereco
    de uma variavel de mesmo tipo do ponteiro
  */
  int *p, *p1, x = 10;
  float y = 20.0;
  p = &x;
  print("*p: %d\n", *p);
  p1 = p; //PERMITIDO
  printf("*p1: %d\n", *p1);
  p = &y; //ERRADO

  /*
    Sobre o valor de endereco armazenado por um ponteiro
    podemos apenas somar e subtrair valores INTEIROS.
  */
  int *p = 0x5DC; //1500
  printf("p = %d\n", p);
  p++;
  printf("p = %d\n", p); //1504
  p = p + 15;
  printf("p = %d\n", p); //1564
  p = p - 2;
  printf("p = %d\n", p); //1556

  /*
    As operacoes de adicao e subtracao no endereco dependem do tipo
    de dado que o ponteiro aponta
  */
  int *p = 0x5DC;  //1500
  char *c = 0x5DC; //1500
  printf("p = %d\n c = %d\n", p, c);
  p++; //1504
  c++; //1501
  printf("p = %d\n c = %d\n", p, c);

  /*
    Ponteiros podem ser comparados usando: 
    ==, !=, >, <. >= e <= 
  */
  int *p, *p1, x, y;
  p = &x;
  p1 = &y;
  if(p > p1)
    printf("p > p1\n");
  else
    printf("p <= p1\n");

  system("pause");
  return 0;
}