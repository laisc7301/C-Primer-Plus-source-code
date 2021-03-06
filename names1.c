#include <stdio.h>
#include <string.h>
struct namect{
    char fname[20];
    char lname[20];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);

int main(void)
{
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    return 0;
}

void getinfo(struct namect * pst)
{
    puts("Please enter your first name.");
    gets(pst->fname);
    puts("Please enter your last name.");
    gets(pst->lname);
}

void makeinfo(struct namect * pst)
{
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect * pst)
{
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}
