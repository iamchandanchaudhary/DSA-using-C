#include <stdio.h>

int main(void) {
  printf("Find big & Small (Arrays):- \n\n");

  int arr[6] = {12, 166, 54, 11, 78, 54};

  int min = arr[0];
  int max = arr[0];

  printf("Origenal List : ");
  for(int i = 0; i < 6; i++) {
    printf(" %d", arr[i]);
  }

  //printf("\n");
  for(int i = 0; i < 6; i++) {
    if(arr[i] < min) {
      min = arr[i];
    }
  }

  for(int i = 0; i < 6; i++) {
    if(arr[i] > max) {
      max = arr[i];
    }
  }

  printf("\n\nSmallest : %d\n", min);
  printf("Biggest : %d\n", max);
  
  return 0;
}