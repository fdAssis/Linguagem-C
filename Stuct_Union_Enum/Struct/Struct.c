#include <stdio.h>
#include <stdlib.h>
#include "Struct.h"

struct pessoa
{
  char *nome;
  char *rua;
  int idade;
  int numero;
};

Pessoa *criarPessoa(char nome[50], char rua[50], int idade, int numero)
{

  Pessoa *p;

  p = (Pessoa *)malloc(sizeof(struct pessoa));

  p->nome = nome;
  p->idade = idade;
  p->rua = rua;
  p->numero = numero;

  return p;
};

void printPessoa(Pessoa *p)
{
  printf("\n");
  printf("---------** Suas Informacoes **--------\n");
  printf("Seu nome: %s\n", p->nome);
  printf("Sua idade: %d\n", p->idade);
  printf("Sua rua: %s\n", p->rua);
  printf("Seu numero da casa: %d\n", p->numero);
  printf("---------------------------------------\n");
}
