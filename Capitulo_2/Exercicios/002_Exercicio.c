/*Coverter string pra maiuscula ou minuscula */ 

#include<stdio.h>

void main() {

  char nome[10] = "francisco"; 

  printf("%s\n", nome);

  for(int i = 0; i <= 10; i++) {
    if(nome[i] >= 'A' && nome[i] <= 'Z') {
      printf("%c", nome[i] + 32);
    }
    else if (nome[i] >= 'a' && nome[i] <= 'z') {
      printf("%c", nome[i] - 32);
    }
  }
}