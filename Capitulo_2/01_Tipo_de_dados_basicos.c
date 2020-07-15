#include <stdio.h>

void main () {

  // Iteiros 
  /*
  int num = 123; 
  int num2;

  float n1, n2;
  */


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

  /*
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
  */


  // Variaveis Reais

  // printf("Tamanho de uma variavel float: %d bytes\n", sizeof(float));
  // printf("Tamanho de uma variavel double: %d bytes\n", sizeof(double));

  // Calcular perimetro e area
 
  /*
  float perimetro, raio;
  double Pi = 3.1415927, area;

  printf("Introduza o Raio da Circunferênciao: ");
  scanf("%f", &raio);

  area = Pi * raio * raio;
  perimetro = 2 * Pi * raio;

  printf("Area: %f\nPerimetro: %f\n", area, perimetro);
  */

  // Conversao de toneladas para quilos

  /*
  float quilos = 1.0E3;
  double gramas = 1.0e6;

  float num_toneladas;

  printf("Quantas toneladas comprou: ");
  scanf("%f", &num_toneladas);

  printf("Numero de quilos = %f = %e\n", num_toneladas * quilos, num_toneladas * quilos);
  printf("Numero de gramas = %f = %E\n", num_toneladas * gramas, num_toneladas * gramas);
  */

  // Caracteres - char

  /*
  char caract;
  char ch1, ch2;

  
  printf("Digite um unico caractere: ");
  caract = getchar();
  //scanf("%c", &caract);

  printf("O Caracter digitado foi: %c", caract);
  */

  /*
  printf("Digite um caracter: ");
  scanf("%c", &ch1);

  printf("Digite outro caracter: ");
  scanf(" %c", &ch2);

  printf("Os caracters digitados foram: '%c' e '%c'\n", ch1, ch2);
  //A leitura de valores através da maioria das funções usa o buffer do teclado...
  // [...] como repositório temporário dos caracteres que nós escrevemos.
  */

  //Caracteres e Inteiros

  /*
  char caracter;

  printf("Digite um unico caracter: ");
  scanf("%c", &caracter);

  printf("O numero do caracter '%c' na tabela ASCII eh %d", caracter, (int)caracter);
  */

}