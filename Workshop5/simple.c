#include <stdio.h>
#include <string.h>
int func(char *str)
{
    char buf[128];
    strcpy(buf, str);
    return 0;
}
int main(int argc, char *argv[])
{
    func(argv[1]);
    return 0;
}