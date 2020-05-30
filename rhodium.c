#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = 770 * weight * 14.5833;
    printf("Your weight in rhodiums is worth $%.2f.\n", value);
    printf("eat more to maintain your value.\n");
    system("pause");
    return 0;
    }
