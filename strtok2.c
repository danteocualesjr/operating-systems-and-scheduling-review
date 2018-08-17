#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[128] = "Lambda School Languanges | JavaScript | Python | C | HTML | CSS";
	const char delim[3] = " | "; // this has to be a constant
	char *token;

	// get the first token
	token = strtok(str1, delim);

	// traverse the tokens
	while (token != NULL) {
		printf("%s\n", token);
		token = strtok(NULL, delim);
	}

	return 0;
}
