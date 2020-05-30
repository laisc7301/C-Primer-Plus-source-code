//summing.c
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;
    printf("Please enter an integer to be summed. ");
    printf("q to quit: ");
    status = scanf("%d", &num);
    while(status == 1)
    {
        sum += num;
        printf("Please enter an integer (q to quit): ");
        status = scanf("%ld", &num);
       // printf("%d\n", status);             
    }
    printf("Those integers sum to %ld", sum);
   // getchar();
    //getchar(); 
   // getchar(); 
    return 0;
    } 
