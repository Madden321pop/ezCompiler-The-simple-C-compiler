#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    if (argc < 2){
        printf("Please provide the right filename\n");
        printf("Usage: ezCompile <file.c>\n");
    }

    char command[512];

    sprintf(command, "gcc %s -o ez_out && ./ez_out && rm ez_out", argv[1]);

    printf("Compiling and running file!");

    int result = system(command);

    if (result != 0){
        printf("The file failed to compile!");
    }

    return 0;
}