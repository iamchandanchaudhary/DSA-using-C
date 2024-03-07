#include <stdio.h>
#include <string.h>

int main(void) {
  printf("Character Length :- \n\n");

  char name[] = "Chandan Chaudhary";
  
  int length = strlen(name);

  printf("Length is : %d\n", length);
  
  return 0;
}