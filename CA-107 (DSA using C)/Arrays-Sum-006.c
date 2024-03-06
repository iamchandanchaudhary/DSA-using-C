#include <stdio.h>

int main(void) {
  printf("Arrays Sum :- \n\n");

  int size;
  printf("Enter Size of the Array : ");
  scanf("%d", &size);
  int arr[size];

  printf("\n");
  for(int i = 0; i < size; i++) {
    printf("Enter Value at Index(%d) : ", i);
    scanf("%d", &arr[i]);
  }
  int sum = 0;

  printf("\nOrigenal Array :");
  for(int i = 0; i < size; i++) {
    printf(" %d,", arr[i]);
    sum = sum + arr[i];
  }
  printf("\nSum of Array : %d\n", sum);
  return 0;
}