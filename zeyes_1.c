#include <stdio.h>
int main(void)
{
    int i = 10;
    char ppt = 'a';
    printf("第一次输出i = %d\n", i);
    i = 20;
    printf("第二次输出i = %d\n", i);
    printf("第一次输出ppt = %c\n", ppt);
    ppt = 'b';
    printf("第二次输出ppt = %c\n", ppt);
    getchar();
    return 0;
}
