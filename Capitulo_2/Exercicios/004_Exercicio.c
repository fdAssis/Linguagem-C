/*Algoritmo pra calcular o valor de uma compra em uma loja de peças */

#include <stdio.h>

int main() {

  int numPeca, quantPeca;
  float valor, valorTotal;

  scanf("%i %i %f", &numPeca, &quantPeca, &valor);
  valorTotal = quantPeca * valor;

  scanf(" %i %i %f", &numPeca, &quantPeca, &valor);
  valorTotal += quantPeca * valor;

  printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);

  return 0;
}