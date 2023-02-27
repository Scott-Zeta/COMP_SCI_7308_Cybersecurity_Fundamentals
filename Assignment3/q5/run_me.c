#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
// OK not really a buffer overflow problem
int main(int argc, char **argv) 
{
    setreuid(geteuid(), getegid());
    system("cat secet"); // oops misspell... ah well
return 0;
}