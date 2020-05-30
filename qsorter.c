#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM 40

void fillarray(double ar[], int n);
void showarray(const double ar[], int n);
int cmp(const void *, const void *);

int main(void)
{
    double vals[NUM];
    fillarray(vals, NUM);
    puts("Random list: ");
    showarray(vals, NUM);
    qsort(vals, NUM, sizeof(double), cmp);
    puts("\nsorted list: ");
    showarray(vals, NUM);
    return 0;
}

void fillarray(double ar[], int n)
{
    int index;
    srand(time(0));
    for(index = 0; index < n; index++)
        ar[index] = (double)rand() / ((double)rand() + 0.1);
}

void showarray(const double ar[], int n)
{
    int index;
    for(index = 0; index < n; index++)
    {
        printf("%9.4f ", ar[index]);
        if(index % 6 == 5)
            putchar('\n');
    }
    if(index % 6 == 0)
    {
        putchar('\n');
    }
}

int cmp(const void *p1, const void *p2)
{

    const double *a1 = (const double *)p1;
    const double *a2 = (const double *)p2;
    if(*a1 < *a2)
        return -1;
    else if(*a1 == *a2)
        return 0;
    else
        return 1;


}
