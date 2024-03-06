#include <stdio.h>

int main(void) {
  printf("Count Even (Arrays) : \n\n");

  int a[10], i, sum = 0, product = 0;
  int countEven = 0;
  int countOdd = 0;

  printf("Enter value of A Matrix : \n");
  for(i = 0; i < 10; i++) {
    printf("at Index (%d) : ", i);
    scanf("%d", &a[i]);
  }

  printf("\nOriginal List : ");
  for(i = 0; i < 10; i++) {
    printf(" %d", a[i]);
  }

  for(i = 0; i < 10; i++) {
    if(a[i] % 2 == 0) {
      countEven++;
      
    } else if(a[i] % 2 != 0) {
      countOdd++;
    }
  }
  printf("\nTotal Even : %d", countEven);
  printf("\nTotal Odd : %d", countOdd);


  for(int i = 0; i < 10; i++) {
    if(a[i] % 2 == 0) {
      sum = a[i] + a[i];

    } else if(a[i] % 2 != 0) {
      product = a[i] * a[i];
    }
  }

  printf("\n\nSum of Even : %d", sum);
  printf("\nProduct of Odd : %d", product);

  printf("\n\nThank You :) \n");
  return 0;
}