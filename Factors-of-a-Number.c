#include <stdio.h>

void main(){

    int in, fac = 0;

    printf("Enter the Number: "); scanf("%d", &in);

    for (int i = 1; i <= in; i++)
    {
        if (in%i == 0){
            fac += 1;
            printf("%d\n", i);
        }
        
    }
    
    printf("\nNo of Factors: %d", fac);
}