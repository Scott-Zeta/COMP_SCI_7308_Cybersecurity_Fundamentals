// Hint - what does printf("%0999d",1) produce??
// you can try in bash like $printf "%0999d" 123
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
void secret()
{
    setreuid(geteuid(), getegid());
    system("/bin/cat /home/q4/secret");
}
void lose()
{
    printf("Try again...\n");
}
int main(int argc, char **argv)
{
    // fp is function pointer
    struct
    {
        char buffer[1024];
        volatile unsigned int (*fp)();
    } locals;

    locals.fp = &lose;
    
    if (argc != 2)
    {
        printf("Usage: q4 <some string>\n");
        return -1;
    }
    if (strlen(argv[1]) > 100)
    {
        printf("Sorry the input string is too long...\n");
        return -1;
    }

    // use sprintf instead of strcpy
    // strcpy(locals.buffer, argv[1]);
    sprintf(locals.buffer, argv[1]);

    printf("Jumping to function at 0x%08x!!\n", (unsigned int)locals.fp);
    locals.fp();
    return 0;
}