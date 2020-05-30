//scores_in.c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
#define PAR 72
int main(void)
{
    int index, scores[SIZE];
    int sum = 0;
    float average;
    printf("Enter %d golf scores: \n", SIZE);
    for(index = 0; index < SIZE; index++)
    {
        scanf("%d", &scores[index]);
    }
    printf("\n");
    for(index = 0; index < SIZE; index++)
        sum += scores[index];
    average = (float)sum / SIZE;
    printf("Sum of scores = %d, average = %.2f\n", sum, average);
    printf("That's a handicap of %.0f.\n", average - PAR);
    system("pause");
    system("pause");
    return 0;
}
