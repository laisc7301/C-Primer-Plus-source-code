//typesize.c
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type double has a size of %u bytes.\n", sizeof(double));
    system("pause");
    return 0;
    }
