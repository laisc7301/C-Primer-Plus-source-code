#include <stdio.h>
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 MEgabuck Plaza"
#define PLACE "Megapolis,CA 94904"
#define WIDTH 40
#define SPACE ' '
//void starbar(void);
void show_n_char(char, int);
int main(void)
{
    //starbar();
    show_n_char('*', WIDTH);
    printf("\n");
    show_n_char(SPACE, 12);
    printf("%s\n", NAME);
    show_n_char(SPACE, 12);
    printf("%s\n", ADDRESS);
    show_n_char(SPACE, 12);
    printf("%s\n", PLACE);
    show_n_char('*', WIDTH);
    //starbar();
    getchar();
    return 0;
}

/*void starbar(void)
{
    int count;
    for(count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}*/

void show_n_char(char ch, int num)
{
    int count;
    for(count = 1; count <= num; count++)
        putchar(ch);
}
