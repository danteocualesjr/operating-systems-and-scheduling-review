#include <stdio.h>
#include <string.h>

// The fflush() function is typically used for output stream only. Its purpose is to clear (or flush) the output buffer and move the buffered data to console (in case of stdout).

int main () {

    char buff[1024];

    memset(buff, '\0', sizeof( buff ));

    fprintf(stdout, "Going to set full buffering on\n\n");
    setvbuf(stdout, buff, _IOFBF, 1024);

    fprintf(stdout, "This is tutorialspoint.com\n");
    fprintf(stdout, "This output will go into buff\n\n");
    fflush( stdout );

    fprintf(stdout, "and this will appear when programm\n");
    fprintf(stdout, "will come after sleeping 5 seconds\n");

    sleep(5);

    return(0);
}
