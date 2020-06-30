#include <stdio.h>

void main () {

  // Iteiros 

  int num = 123; 
  int num2;

  float n1, n2;


  // printf("O valor de num = %d e o valor seguinte = %d\n", num, num+1);

  /*
  printf("Digite um numero: ");
  scanf("%d", &num2);
  printf("O numero digitado foi: %d\n", num2);
  */

  /*
  printf("Introduza dois numeros: ");
  scanf("%f%f", &n1, &n2);
  printf("O resultado de %f + %f = %f\n", n1, n2, n1+n2);
  */

  // Inteiros e Variações
  
  printf("O tamanho em bytes de um Iteiro = %d bytes\n", sizeof(int));

  // Short e Long

  short int idade;
  int montante;
  long int num_conta;

  printf("Qual sua idade: ");
  scanf("%hd", &idade);

  printf("Qual o montante a depositar: ");
  scanf("%d", &montante);

  printf("Qual o numero da conta: ");
  scanf("%ld", &num_conta);

  printf("Uma pessoa de %hd anos depositou R$%d na sua conta %ld\n", idade, montante, num_conta);
  
}