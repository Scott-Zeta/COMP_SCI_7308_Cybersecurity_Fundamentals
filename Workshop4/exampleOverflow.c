#include<stdio.h>
int main(){
    char c = 'X';
    char buff[3];
    printf("Variable c holds: %c\n", c);
    printf("Enter a 2 digit nummber:");
    //gets(buff); 
    // ! unexpected behavior happened when input 3 digits(one should for \0)
    fgets(buff ,sizeof(buff), stdin);
    //only get first two digits and a \0 terminator
    printf("Got %s\n", buff);
    printf("Varibale c holds: %c\n", c);
    return 0;
}