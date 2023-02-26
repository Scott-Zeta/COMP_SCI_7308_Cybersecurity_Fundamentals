#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    volatile char grade[] = "F";
    char buf[19];
    printf("Enter your student ID: ");
    gets(buf);
    printf("Hello %s! Your grade is %s!\nHave a good day.\n", buf, grade);
    return 0;
}