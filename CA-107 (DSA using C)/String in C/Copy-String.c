#include <stdio.h>
#include <string.h>

int main(void) {
  printf("Coping String :- \n\n");

  char oldString[50] = "Chandan";
  char newString[50] = "Chandu";

  strcpy(newString, oldString);

  //puts(newString);
  printf("Name is : %s\n", oldString);
  printf("Nmae is : %s\n", newString);
  
  return 0;
}