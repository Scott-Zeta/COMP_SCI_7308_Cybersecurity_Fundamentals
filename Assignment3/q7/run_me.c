// standard buffe/stack overflow
// use a suitable shellcode
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
void bof(char *str)
{
    char buffer[1024];
    strcpy(buffer, str);
    return;
}
int main(int argc, char **argv) 
{ 
    if (argc != 2) 
    {
        printf("Usage: %s <input string>",argv[0]);
        return -1;
    }
    bof(argv[1]);
    return 0; 
}