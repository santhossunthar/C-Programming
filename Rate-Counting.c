#include <stdio.h>

void main(){

    int rate[5] = {0,0,0,0,0}, in;

    while (1)
    {
        printf("\nPls input the service rating(1-5): ");
        scanf("%d", &in);

        if(in == -1){

            break;

        }else if(in>5 || in < 1)
        {
             printf("\nWrong input, Try again!");

        }else if(in == 1)
        {
            rate[0] += 1;

        }else if(in == 2)
        {
            rate[1] += 1;

        }else if(in == 3)
        {
            rate[2] += 1;

        }else if(in == 4)
        {
            rate[3] += 1;

        }else if(in == 5)
        {
            rate[4] += 1;
        }   
        
    }
    
    printf("\n\nRating      Number of response\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d                  %d\n", i+1, rate[i]);
    }
  
}