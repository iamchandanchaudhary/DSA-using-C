#include<stdio.h>

  void push(void);
  void pop(void);
  void display(void);

  int stack[100], choice, n, top, x, i;
  int main() {
  top = -1;
    printf("\nEnter the size of stack : ");
    scanf("%d",&n);
    
    printf("\n\t 1.Push\n\t 2.POP\n\t 3.Display\n\t 4.exit");
 
  do {
    printf("\nEnter Choice : ");
    scanf("%d",&choice);
    
  switch(choice) {
  case 1:
  push();
  break;
    
  case 2:
  pop();
  break;
    
  case 3:
  display();
  break;
    
 default :
    printf("\nWrong Choice!");
  }
}
    while(choice != 4);
 return 0;
 }

 void push() {
   
 if(top > n-1) {
    printf("Stack is over flow");
 }
 else {
    printf("\nEnter a value to be pushed : ");
    scanf("%d",&x);
  top++;
 stack[top] = x;
  }
}

 void pop() {
 if(top <= -1) {
 printf("Stack is under flow");
 }
   
 else {
 printf("The popped element is : %d",stack[top]);
 top--;
 }
}

 void display() {
    if(top >= 0) {
   
    printf("\nThe Element in the stack : ");
   
 for(i = top; i >= 0; i--)
    printf("\n%d",stack[i]);
    printf("\nPress next choice");
 } 
 else {
    printf("Stack is empty");
 }
}