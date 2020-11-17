#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	char *liststr;
	struct stat st;
	size_t bufsize = 1024;

	if (ac != 2)
	{
		printf("One name of file is required\n");
		return (1);
	}

	liststr = malloc(sizeof(bufsize));

	if (!liststr)
	{
		printf("Calloc error:\n");
		return (1);
	}

	/*copy to the bufer*/
	liststr = strcpy(liststr, "./");
	/*copy filename to the end of liststr*/
	liststr = strcat(liststr, av[1]);

	printf("Full path: %s\n", liststr);

	if (!liststr)
		return(1);

	if (stat(liststr, &st) == 0)
	{
		printf("FILE FOUND\n");
		return (0);
	}
	return (0);
}
