#include <stdio.h>
int main(void)
{
    int i = 10;
    char ppt = 'a';
    printf("��һ�����i = %d\n", i);
    i = 20;
    printf("�ڶ������i = %d\n", i);
    printf("��һ�����ppt = %c\n", ppt);
    ppt = 'b';
    printf("�ڶ������ppt = %c\n", ppt);
    getchar();
    return 0;
}
