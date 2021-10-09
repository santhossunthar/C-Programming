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

    int temp;
    
    for (int k = 0; k < size; k++)
    {
        for (int m = 0; m < size-1; m++)
        {

            if (arr[m] > arr[m+1]){
                temp = arr[m+1];
                arr[m+1] = arr[m];
                arr[m] = temp;
        }
          
    }
    }

    printf("\nSorted Array: {");
    
    for (int q = 0; q < size; q++)
    {
       printf(" %d ", arr[q]);
        
    }

    printf("}\n");

    printf("\nFirst Largest Element: %d", arr[size-1]);
    printf("\nSecond Largest Element: %d", arr[size-2]);
    
}