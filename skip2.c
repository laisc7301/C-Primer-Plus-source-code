//skip2.c
#include <stdio.h>
int main(void)
{
    int n;
    printf("Please enter three integers: \n");
    scanf("%*d %*d %d", &n);
    printf("The last integers was %d\n", n);
    getchar();
    getchar();
    return 0;
}
