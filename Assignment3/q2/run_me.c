#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    // the struct is used to ensure the loc variables are in the same order
    // without struct, compiler can swap these around making expolit impossible
    struct
    {
        char buffer[1024];
        volatile int changeme;
    } locals;

    locals.changeme = 0;

    if (argc != 2)
    {
        printf("Uage: %s <input string>\n", argv[0]);
        return 1;
    }
    // copy argument to the buffer
    strcpy(locals.buffer, argv[1]);

    // reveal the secret if "changeme" has been changed to 0xabcdabcd
    if (locals.changeme == 0xabcdabcd)
    {
        setreuid(geteuid(), getegid());
        system("cat /home/q2/secret");
    }
    else
    {
        printf("Try again!\n");
    }
    exit(0);
}