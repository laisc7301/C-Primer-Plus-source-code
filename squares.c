#include <stdio.h>
int main(void)
{
    int num = 0;
    while(num++ < 21)
    {
        printf("%4d %6d\n", num, num * num);
    }
    getchar();
    return 0;
}
