#include <stdio.h>

void main(){

    int size;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    int arr[size], revArr[size];

    printf("Enter the Array: \n");

    for (int i = 0; i < size; i++)
    {
       scanf("%d", &arr[i]);
        
    }
    
    int p = size;
    
    for (int k = 0; k < size; k++)
    {
       for (p; p > 0;)
       {
          revArr[k] = arr[p-1];
          break;
       } 
       p--;     
    }

    printf("{");
    
    for (int q = 0; q < size; q++)
    {
       printf(" %d ", revArr[q]);
        
    }

    printf("}");
    
}