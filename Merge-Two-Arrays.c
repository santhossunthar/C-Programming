#include <stdio.h>

void main(){

    int size1, size2;

    printf("Enter the First Array Size: ");
    scanf("%d", &size1);

    printf("Enter the Second Array Size: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], merArr[size1+size2];

    printf("Enter the First Array: \n");

    for (int i = 0; i < size1; i++)
    {
       scanf("%d", &arr1[i]);
        
    }

    printf("Enter the Second Array: \n");

    for (int j = 0; j < size2; j++)
    {
       scanf("%d", &arr2[j]);
        
    }

    for (int m = 0; m < size1; m++)
    {
        merArr[m] = arr1[m];
    }
    
    int p=0;
    
    for (int k = size1; k < size1+size2; k++)
    {
       for (p; p < size2;)
       {
          merArr[k] = arr2[p];
          break;
       } 
       p++;     
    }

    printf("{");
    
    for (int q = 0; q < size1+size2; q++)
    {
       printf(" %d ", merArr[q]);
        
    }

    printf("}");
    
}