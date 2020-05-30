#include <stdio.h>
#define SQUARES 64
#define CROP 1E15
int main(void)
{
    double current, total;
    int count = 1;
    int n = 0;
    printf("square     ");
    printf("grain added      total grains     ");
    printf("fraction of\n");
    while(n++ < 46) {putchar(' ');}
    printf("US total\n\n");
    total = current = 1.0;
    printf("%4d %16.2e %16.2e %16.2e\n", count, current, total, current/CROP);
    while(count++ < SQUARES)
    {
        current = 2.0 * current;
        total = current + total;
        printf("%4d %16.2e %16.2e %16.2e\n", count, current, total, total / CROP);
    
    }
    getchar();
    return 0;
}
