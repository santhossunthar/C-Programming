#include <stdio.h>

void main(){

    char correctAnswers[6] = "TFFTFT", in, studentAnswers[6];
    int noOfCorrectAnswers = 0;

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &studentAnswers[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (studentAnswers[i] == correctAnswers[i])
        {
            noOfCorrectAnswers += 1;
        }

    }

    printf("\nCorrect Answers\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%c", correctAnswers[i]);

    }

    printf("\n\nStudent Answers\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%c", studentAnswers[i]);

    }

    printf("\n\nNo of Correct Answers: %d", noOfCorrectAnswers);
    
    
}