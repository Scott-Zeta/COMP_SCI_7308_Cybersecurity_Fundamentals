#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int bof(char *str)
{
    char buf[12];
    strcpy(buf, str);
    printf("You entered: %s\n", buf);
    return 0;
}
int main(int argc, char **argv)
{
    char buf[12];
    if (argc != 2)
    {
        printf("Usage: %s <argument>\n", argv[0]);
        return -1;
    }
    bof(argv[1]);
    return 0;
}