#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    char buff[64];
    if (argc < 2) {
            printf("Usage: %s <input string>\n", argv[0]);
            return (1);
    }
    strncpy(buff, argv[1], sizeof(buff));
    printf("You wrote: ");
    printf(buff);
    printf("\n");
    return 0;
}