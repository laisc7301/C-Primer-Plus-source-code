#include <stdio.h>
#include <stdlib.h>
int one_three(void);
void one(void);
void two(void);
void three(void);
int main(void)
{
    printf("Starting now!\n");
    if(one_three() == 0)
        printf("done!\n");
    system("pause");
    return 0;
    }
int one_three(void)
{
    one();
    two();
    three();
    return 0;
    }
void one(void)
{
     printf("one\n");
     }
void two(void)
{
     printf("two\n");
     }
void three(void)
{
     printf("three\n");
     }
