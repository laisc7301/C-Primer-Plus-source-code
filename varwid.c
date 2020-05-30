//varwid.c
#include <stdio.h>
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;
    printf("What field width?\n");
    scanf("%d", &width);
    printf("The number is: %*d: \n", width, number);
    printf("Now enter a width and a precision: \n");
    scanf("%d %d", &weight, &precision);
    printf("Weight = %*.*f", width, precision, weight);
    //getchar();
    //getchar();
    return 0;
    }
