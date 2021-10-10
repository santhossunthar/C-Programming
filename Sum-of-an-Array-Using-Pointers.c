#include <stdio.h>

void main(){

    int size;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the Array: \n");

    int *ptr;

    for (ptr = arr; ptr < arr + size; ptr++)
    {
       scanf("%d", ptr);       
    }

    int sum = 0;
    
    for (ptr = arr; ptr < arr + size; ptr++)
    {
       sum += *ptr;      
    }
    
    printf("\nSum of the Array: %d", sum);
         
}