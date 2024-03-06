#include <stdio.h>

int main(void) {
  printf("Sum of 2D Arrays :- \n\n");

  int rows, column;
  printf("Enter Rows : ");
  scanf("%d", &rows);

  printf("Enter Column : ");
  scanf("%d", &column);
  
  int arr[rows] [column];

  printf("\nEnter Your Elements :- \n");
  
  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < column; j++) {
      printf("Enter element at Index (%d, %d) : ", i, j);
      scanf(" %d", &arr[i][j]);
    }
  }
  int sum = 0;

  printf("\nOrignal Array : \n");
    for(int i = 0; i < rows; i++) {
      for(int j = 0; j < column; j++) {
        sum = sum + arr[i][j];
        printf("%d \t", arr[i][j]);
      }
      printf("\n");
    }
  printf("\nSum of Arrays : %d\n", sum);
  return 0;
}