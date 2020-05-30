//floats.c
#include <stdio.h>
int main(void)
{
    const double PENT = 3852.99;
    printf("*%f*\n", PENT);
    printf("*%e*\n", PENT);
    printf("*%4.2f*\n", PENT);
    printf("*%3.1f*\n", PENT);
    printf("*%10.3f*\n", PENT);
    printf("*%10.3e*\n", PENT);
    printf("*%+4.2f*\n", PENT);
    printf("*%010.2f*\n", PENT);
    getchar();
    return 0;
}
