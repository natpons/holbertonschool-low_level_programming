#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char **environ;

/**
 * _getenv - gets an environment variable
 * ex:HOME=/home/vagrant, get value after =
 * @name: name of the variable user enter
 */
char *_getenv(const char *name)
{
	char *environ_string;
	char *value = NULL;
	int i = 0;

	while (environ[i] != '\0')
	{
		/*from array to the chain of characters*/
		environ_string = strdup(environ[i]);
		/*selects the part of the line before =*/
		value = strtok(environ_string, "=");
		/*compare two strings*/
		if (strcmp(name, value) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
		/*environ[i] = environ_string;*/
		free(environ_string);
	}
	return (NULL);
}
/**
 * prints each directory contained in the env variable PATH
 * one directory per line
 */
int main(void)
{
	char *folder;
	char *path;

	printf("%s\n", _getenv("PATH"));
	path = _getenv("PATH");

	folder = strtok(path, ":");
	while(folder != NULL)
	{
		printf("Folder: %s\n", folder);
		folder = strtok(NULL, ":");
	}

	return(0);
}
