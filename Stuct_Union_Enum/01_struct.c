#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;
};

// Animnhamento de structs
  struct endereco{
    char rua[50];
    int numero;
  };

  struct pessoa{
    char nome[50];
    int idade;
    struct endereco ender;
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

  //COM STRUCT
  struct pessoa p1, p2, p3, p4;

  /*
    A "struct" eh um tipo de dado, e portanto a linguagem C suporta a declaracao
    de um array de estrutura
  */

  //COM STRUCT E COM ARRAY
  struct pessoa p[4];
  p[0].idade = 30;
  p[1].idade = 20;
  p[2].idade = 23;
  p[3].idade = 7;


  //Animhamento de Structs
  struct pessoa pessoa_aninhada;
  pessoa_aninhada.idade = 31;
  pessoa_aninhada.ender.numero = 102;


  system("pause");

  return 0;
}