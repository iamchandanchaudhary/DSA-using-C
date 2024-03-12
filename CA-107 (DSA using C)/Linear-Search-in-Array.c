#include <stdio.h>

int main(void) {
  printf("Linera Search in Array : \n\n");

  int size;
  printf("Enter Size of Array : ");
  scanf("%d", &size);

  int arr[size];

  printf("\nEnter Elements : \n");
  for(int i = 0; i < size; i++) {
    printf("at Index(%d) : ", i);
    scanf("%d", &arr[i]);
  }

  printf("\nOrigenal Array : ");
  for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }

  int x;
  printf("\nSearch Element : ");
  scanf("%d", &x);

  for(int i = 0; i < size; i++) {
    if(x == arr[i]) {
      printf("\nElement (%d) Found at Index [%d]", x, i);
    }
  }
  //printf("Not Found \n");
  return 0;
}