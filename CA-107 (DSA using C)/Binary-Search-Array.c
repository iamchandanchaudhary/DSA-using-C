#include <stdio.h>

int main(void) {
  printf("Binary Search(Array) :- \n\n");

  int mid, high, low;
  int arr[11] = {4, 7, 8, 12, 21, 34, 54, 57, 66, 98, 104};

  printf("Original Array :- \n");
  for(int i = 0; i < 11; i++) {
    printf("%d ", arr[i]);
  }

  int x;
  printf("\n\nSearch Element : ");
  scanf("%d", &x);

  low = 0;
  high = 11-1;
  
  while(low <= high) {
    mid = (low + high)/2;
    if(arr[mid] == x) {
      printf("Element (%d) found at Index : [%d] ", x, mid);
    }
    if(arr[mid] < x) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  //printf("Not Found :(\n");
  return 0;
}