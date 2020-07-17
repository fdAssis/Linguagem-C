/* Calcular a media de um aluno */

#include <stdio.h>

float cal_media (int tamanho, float notas[]);

void main () {

  int quant_notas = 0;

  printf("\t--------------------------\n");
  printf("\t##### Calculo Media ######\n");
  printf("\t--------------------------\n");

  printf("Informe a quantidade de notas: ");
  scanf("%i", &quant_notas);

  float notas[quant_notas - 1]; 

  for(int i = 0; i < quant_notas; i++){
    printf("Informe a nota %i: ", i);
    scanf("%f", &notas[i]);
  }

  printf("A media foi: %0.2f", cal_media(quant_notas, notas));

}

float cal_media (int tamanho, float notas[]) {
  float sum  = 0;

  for(int i = 0; i <= tamanho; i++) {
    sum += notas[i];
  }

  return (sum/tamanho);
}