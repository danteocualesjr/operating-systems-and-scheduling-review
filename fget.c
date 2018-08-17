#include <stdio.h>
#define MAX 64
int  main(void)
{
	char buff[MAX];

	printf("Enter some string: ");
	fgets(buff, MAX, stdin); // better option than gets 
	// gets(buff); // dont use this, its unsafe
	printf("You eneterd: %s\n", buff);

	return 0;
}
