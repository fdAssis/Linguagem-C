#ifndef STRUCT_H
#define STRUCT_H

typedef struct pessoa Pessoa;

//Criar uma pessoa
Pessoa *criarPessoa(char nome[50], char rua[50], int idade, int numero);

//Imprimir os dados de uma pessoa
void printPessoa(Pessoa *p);

#endif
