#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
struct data {
    char name[64];};
    struct fp {int (*fp)();
};
void winner() {
    setreuid(geteuid(),getegid());
    system("/bin/cat /home/q10/secret");  
}
void nowinner() {
    printf("Try again!\n");}
    int main(int argc, char **argv){
        struct data *d;
        struct fp *f;
        if (argc != 2) {
            printf("Usage: %s <input string>\n", argv[0]);
            exit (1);
        }
        d = malloc(sizeof(struct data));
        f = malloc(sizeof(struct fp));
        f->fp = nowinner;
        printf("data is at %p, fp is at %p\n", d, f);
        strcpy(d->name, argv[1]);f->fp();
}