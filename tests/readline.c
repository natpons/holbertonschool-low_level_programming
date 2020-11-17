#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *buffer;
	size_t bufsize = 1024;
	size_t command;

	printf("$\n");

	/*buffer for a command of a user*/
	buffer = (char *)malloc(bufsize * sizeof(char));

	printf("Enter the command: ");
	command = getline(&buffer,&bufsize,stdin);
	printf("You typed: '%s'\n",buffer);

	return(0);
}
