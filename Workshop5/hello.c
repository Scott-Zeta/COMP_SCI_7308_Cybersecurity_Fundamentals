#include <stdio.h>
void hello(char *name)
{
    printf("Hello, %s!!\n", name);
}
int main()
{
    char name[12];
    printf("What is your name?");
    gets(name);
    hello(name);
    return 0;
}