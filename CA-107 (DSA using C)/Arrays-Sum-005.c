#include <stdio.h>

int main(void) {
  printf("Arrays Sum :- \n\n");

  int arr[6] = {9, 5, 6, 7, 3, 6};

  int sum = 0;

  printf("Origenal Array :");
  for(int i = 0; i < 6; i++) {
    printf(" %d", arr[i]);
    sum = sum + arr[i];
  }
  printf("\nSum of Array : %d\n", sum);
  return 0;
}