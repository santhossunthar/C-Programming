#include <stdio.h>

void main(){

    int size, *ptr;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the Array: \n");

    for (ptr = arr; ptr < arr+size; ptr++)
    {
       scanf("%d", ptr);
        
    }

    printf("\nArray: {");
    
    for (ptr = arr; ptr < arr+size; ptr++)
    {
       printf(" %d ", *ptr);
        
    }

    printf("}\n");
    
}