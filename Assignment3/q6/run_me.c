// This is only a slight variation on Q2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void print_secret()
{
    setreuid(geteuid(), getegid());
    system("/bin/cat /home/q6/secret");
}
int main(int argc, char **argv)
{
    struct
    {
        char buffer[1024];
        volatile int flag;
    } locals;
    char *secret_code;
    locals.flag = 0; 

    // reading value from environmental variable
    secret_code = getenv("Q6_SECRET_CODE");
    strcpy(locals.buffer, secret_code);
    if (locals.flag == 0xdeadbeef)
    {
        print_secret();
    }
    else
    { 
        printf("Try again... the current value of flag is 0x%08x", locals.flag);
    }
    return 0;
}