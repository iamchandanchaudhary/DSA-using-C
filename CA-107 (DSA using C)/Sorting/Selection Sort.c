#include <stdio.h>
void selection_sort();
int a[30], n;

void main() {
  
    int i;
    printf("\nEnter size of an Array : ");
    scanf("%d", &n);
  
    printf("\nEnter elements of an Array : \n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
  
    selection_sort();
  
    printf("\nAfter Sorting : \n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

  void selection_sort() {
    
    int i, j, min, temp;
    
    for(i = 0; i < n; i++) {
        min = i;
        for(j = i+1; j < n; j++) {
            if(a[j] < a[min])
                min = j;
        }

      // Swaping
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}