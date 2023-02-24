#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int flag;
    char buff[64];
    flag = 0;

    if (argc < 2)
    {
        printf("Uage: %s <input string>\n", argv[0]);
        return -1;
    }

    strncpy(buff, argv[1], sizeof(buff));
    printf("You wrote: ", buff);
    printf(buff); //vulnerable code
    printf("\n");
    printf("Flag is located at %08x\n", &flag);
    printf("Flag is %d\n", flag);
    return 0;
}