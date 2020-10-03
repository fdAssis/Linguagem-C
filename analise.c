#include <stdio.h>

int FB(int *A, int n, int *B, int m);

int main(){
  int A[5] = {1, 2, 3, 4, 5};
  int B[3] = {8, 7, 9};

  printf("%d", FB(A, 5, B, 3));
}
int FB(int *A, int n, int *B, int m){
  int i, j, b;

  for (i = 0; i < m; i++){
    for (j = 0; j < n; j++){
      if (b == A[j]){
        printf("%i", b);
        break;
      }
      return (0);
    }
  }
  return (1);
}