#include <stdio.h>

int main(void) {
  printf("Sum of  Arrays :- \n\n");

  int a[3][3], b[3][3], c[3][3];

  printf("Element Matrix A : \n");

  for(int i = 0; i < 3; i++) {
    for(int j = 0; i < 3; j++) {
      printf("Enter element : ");
      scanf("%d", &a[i][j]);
    }
  }

  printf("Element Matrix B : \n");
  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      printf("Enter element : ");
      scanf("%d", &b[i][j]);
    }
  }
  
  return 0;
}