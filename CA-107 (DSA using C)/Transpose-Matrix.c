#include <stdio.h>
int main(void) {
  printf("Sum of 2D Matrix :- \n\n");

  int a[3][3], b[3][3], c[3][3], d[3][3];

  // taking input of 1st matrix
  printf("Enter values of A Matrix :- \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("at Index (%d,%d) : ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
  // taking input of 2nd matrix
  printf("\nEnter values of B Matrix :- \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("at Index(%d,%d) : ", i, j);
      scanf("%d", &b[i][j]);
    }
  }
  // Addition of both matrix
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {

      c[i][j] = a[i][j] + b[i][j];
    }
  }
  printf("\nSum of A & B Matrix : \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("%d\t", c[i][j]);
    }
    printf("\n");
  }

  // transpose
  printf("\nAfter Transpose : \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      d[i][j] = c[j][i];
      printf("%d \t", d[i][j]);
    }
    printf("\n");
  }
  return 0;
}