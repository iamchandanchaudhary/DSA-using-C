#include <stdio.h>
#include <string.h>

int main(void) {
  printf("String Merging :- \n\n");

  char firstName[100] = "Chandan ";

  char lastName[] = "Chaudhary";

  strcat(firstName, lastName);
  
  printf("Full Name : %s\n", firstName);
  
  return 0;
}