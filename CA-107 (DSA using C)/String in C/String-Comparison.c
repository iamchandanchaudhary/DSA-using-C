#include <stdio.h>
#include <string.h>

int main(void) {
  printf("String Comparison :- \n\n");

  char firstText[100] = "Banana";

  char secondText[100] = "Banana";

  // if Equal ==> 0
  // positive(+) ==> first > second (ASCII)
  // negative(-) ==> second < first (ASCII)
  
  printf("Comparison : %d\n", strcmp(firstText, secondText));

  
  return 0;
}