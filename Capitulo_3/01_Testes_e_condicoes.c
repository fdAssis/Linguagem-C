#include <stdio.h>

void main() {

/*
* Implemente um programa que solicite ao utilizador dois inteiros e, em seguida, 
* aplique todos os operadores relacionais de C aos inteiros lidos.
*/
 
 /*  int valorX, valorY;

  printf("Digite dois inteiros: ");
  scanf("%d%d", &valorX, &valorY);

  printf("O resultado de %d == %d : %d\n", valorX, valorY, valorX == valorY);
  printf("O resultado de %d >  %d : %d\n", valorX, valorY, valorX >  valorY);
  printf("O resultado de %d <  %d : %d\n", valorX, valorY, valorX <  valorY);
  printf("O resultado de %d >= %d : %d\n", valorX, valorY, valorX >= valorY);
  printf("O resultado de %d != %d : %d\n", valorX, valorY, valorX != valorY); 
  
  */

 /*
 * Um programa que solicite um salário ao utilizador e mostre o imposto a pagar.
 * Se o salário for negativo ou zero mostre o erro respectivo. 
 * Se o salário for maior que 1000, paga 10% de imposto, se não paga apenas 5%.
 * 
 */
  float salario, imposto;

  printf("Informe o seu salario: ");
  scanf("%f", &salario);

  if(salario <= 0) {
    printf("Salario Invalido");
    return ;
  } else if (salario <= 1000){
    imposto = salario * 0.05;
  } else {
    imposto = salario * 0.1;
  }

  printf("O valor do seu imposto e de: %.2f \n", imposto);

}