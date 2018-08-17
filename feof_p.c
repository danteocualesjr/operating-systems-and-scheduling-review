#include <stdio.h>

int main(void)
{
	FILE *fp;
	char c;

	fp = fopen("lambdaNotes.txt","r");
	// Check if the pointer is Null
	if(fp == NULL) {
		perror("Error in opening the file");
		return(-1);
	}

	while(1) {
		c = fgetc(fp);
		if(feof(fp)) {
			printf("======THE END ==========\n");
			break;
		}
		printf("%c", c);
	}

	// we close the file
	fclose(fp);

	return 0;
}
