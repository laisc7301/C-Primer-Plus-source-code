//pound.c
#include <stdio.h>
void pound(int n);
int main(void)
{
    int times = 5;
    char ch = '!';
    float f = 6.0;
    pound(times);
    pound(ch);
    pound((int)f);
    getchar();
    return 0;
}

void pound(int n)
{
     while(n-- > 0)
     {
         printf("#");
     }
     putchar('\n');
}
