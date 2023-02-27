// this is format string vulnerability very much like the workshop one
// except you have to find out the location of target usin gdb
// overwrite target with specific value to get the bonus point!
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int target;

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Uage: %s <input string>\n", argv[0]);
        return -1;
    }
    
    char buff[128];
    strncpy(buff, argv[1], sizeof(buff));
    printf(buff); 

    if (target == 0x3308)
    {
        setreuid(geteuid(), getegid());
        system("/bin/cat /home/q8/bonus");
    }
    else if (target)
    {
        setreuid(geteuid(), getegid());
        system("/bin/cat /home/q8/secret");
    }
    else 
    {
        printf("Try again!\n");
    }
    return 0;
}