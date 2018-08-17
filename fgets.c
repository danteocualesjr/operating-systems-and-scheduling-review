#include <stdio.h>
#define MAX 64

// The fgets() function reads a line from the specified stream and stores it into the string pointed to by str.

int  main(void)
{
	char buff[MAX];

	printf("Enter some string: ");
	fgets(buff, MAX, stdin); // better option than gets 
	// gets(buff); // dont use this, its unsafe
	printf("You entered: %s\n", buff);

	return 0;
}
