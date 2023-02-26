#include <stdio.h>
#include <stdlib.h>
void win()
{
    printf("You win!\n");
}
void hello()
{
    char buf[17];
    printf("What is your name? ");
    gets(buf);
    printf("Hello %s!\n", buf);
}
int main(int argc, char **argv)
{
    hello();
    return 0;
}