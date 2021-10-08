#include <stdio.h>

void main(){

    int size;

    printf("Enter the Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the Array: \n");

    for (int i = 0; i < size; i++)
    {
       scanf("%d", &arr[i]);
        
    }
    
    int sum = 0;
    
    for (int k = 0; k < size; k++)
    {
       sum += arr[k];
    }
    
    printf("\nSum of the Array: %d", sum);
         
}