#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
int read_file(FILE *file) {
    char buffer[32];
    fread(buffer, sizeof(char), 100, file);
    return 0;
}
int main(int argc, char **argv) { 
    FILE *fp;
    if (argc != 2) {
        printf("Usage: %s <input file path>",argv[0]);
        exit(EXIT_FAILURE);
    }
    setreuid(geteuid(),getegid());
    fp = fopen(argv[1], "r");
    if (fp == NULL){
        perror("Error while opening the file.\n");
        exit(EXIT_FAILURE);
    }
    read_file(fp);
    printf("Done reading file...\n");
    fclose(fp);
    return 0;
}