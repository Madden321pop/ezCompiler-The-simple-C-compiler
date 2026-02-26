#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>


int main (){
    char choice;
    char command[255];

    do {
        printf("\nDownload ezCompile? (y/n): ");

        scanf(" %c", &choice);

        if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N'){
            printf("Invalid input, please enter either Y, yes, or N, no!");

        }
    }while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

    if (choice == 'n' || choice == 'N'){
        printf("Cancelled Installation\n");
    } else if (choice == 'y' || choice == 'Y'){
        printf("Installing ezCompile\n");

        printf("Compiling Code\n");
        system("gcc ezCompile.c -o ezCompile");
        system("cp ezCompile ~/ezCompile");

        sleep(3);



        printf("This may take a few seconds\n");

        system("echo \"alias ezCompile='~/ezCompile'\" >> ~/.bashrc");

        printf("Installation Complete, Please restart your terminal");


    } else { 
        printf("Installation Failed\n");
    }

    
    system("echo beans");

    return 1;
}