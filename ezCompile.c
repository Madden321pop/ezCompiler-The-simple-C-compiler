#include "stdio.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    if (argc < 2){
        printf("Please provide the right filename\n");
        printf("Usage: ezCompile <file.c>, ezCompile --version\n");
        return 0;
    } else if (strcmp(argv[1], "--version") == 0){
        printf("ezCompile Version V1.0\n");
        return 0;
    }

    char command[512];

    sprintf(command, "gcc %s -o ez_out && ./ez_out && rm ez_out", argv[1]);

    printf("Compiling and running file!\n");

    int result = system(command);

    if (result != 0){
        printf("The file failed to compile!\n");
    }

    return 0;
}
