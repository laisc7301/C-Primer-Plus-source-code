//bottles.c
#include <stdio.h>
#define MAX 100
int main(void)
{
    int count = MAX + 1;
    while(--count >0)
    {
        printf("%d bottles of spring water on the wall, ");
        printf("%d bottles of spring water!\n", count, count);
        printf("Take one doown and pass it around,\n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
    getchar();
    return 0;
}