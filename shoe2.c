//shoe2.c
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325
int main(void)
{
    double shoe, foot;
    shoe = 3.0;
    printf("Shoe size (men's)     foot length\n");
    while(shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe += 1.0;
    }
    printf("If the shoe fits, wear it.\n");
    getchar();
    return 0;
    }
