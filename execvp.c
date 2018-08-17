#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// The exec() function is a C library function that allows the child process to run a program different from that of the parent process.
// The execvp() function is a varient of exec().
// The exec family of functions replaces the current running process with a new process.
// Using this command, the created child process does not have to run the same program as the parent process does. 
// https://www.geeksforgeeks.org/exec-family-of-functions-in-c/
// The execvp() function provides an array of pointers to null-terminated strings that represent the argument list available to the new program.

int main(int argc, char **argv)
{
    char *args[3]; //this tells us that there are 3 pointers in the array
    while(1){
        int rc = fork();
        if (rc < 0){
            fprintf(stderr, "Fork Failed\n");
            exit(1);
        } else if (rc==0) {
            //child
            printf("Hello, Child here!\n");
            args[0] = strdup("Wc");
            args[1] = strdup("file.txt");
            args[2] = NULL;

            execvp(args[0], args);
            printf("This should not be seen.\n");
        } else {
            //parent
            int wc = waitpid(rc, NULL, 0);
            printf("Hello, Parent here!\n");

        }
        sleep(5);

    }
    return 0;
}
