//post_pre.c
#include <stdio.h>
int main(void)
{
    int a = 1, b = 1;
    int aplus, plusb;
    aplus = a++;
    plusb = ++b;
    printf("a   aplus   b   plusb \n");
    printf("%ld %5d %5d %5d", a, aplus, b, plusb);
    getchar();
    return 0;
    }
