#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;
};

void printPessoa(struct pessoa p)
{
  printf("\n");
  printf("---------** Suas Informacoes **--------\n");
  printf("Seu nome: %s\n", p.nome);
  printf("Sua idade: %d\n", p.idade);
  printf("Sua rua: %s\n", p.rua);
  printf("Seu numero da casa: %d\n", p.numero);
  printf("---------------------------------------\n");
}

int main()
{
  /*
    A linguagem C permite cirar nossos proprios tipos de variaveis.
    Um deles eh a "struct" tambem chamada de ESTRUTURA
  */

  /* 
  struct pessoa pessoa1;

  pessoa1.idade = 30;

  puts("Digite o seu nome: ");
  scanf("%s", &pessoa1.nome);

  printf("Sua idade: ");
  scanf("%d", &pessoa1.numero);

  puts("Digite o nome da sua rua: ");
  scanf(" %s", &pessoa1.rua);
  
  printf("Numero da casa: ");
  scanf("%d", &pessoa1.numero);

  printPessoa(pessoa1);
  */

  //Inicializando uma estrutura
  /*
    Podemos definir uma lista de valores para colocar na estrutura (como nos arrays)
  */
  struct pessoa pessoa2 = {"DeAssis", "Rau1", 31, 403};
  printPessoa(pessoa2);
  /*
    Campos nao definidos sao inicializados com zero ou com uma string vazia ("")
  */

  struct pessoa pessoa3 = {"Pessoa_3", "Rua2", 10};
  printPessoa(pessoa3);

  system("pause");

  return 0;
}