#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
size_t print_folder(const list_t *head);
extern char **environ;

/**
 * prints each directory contained in the env variable PATH
 * one directory per line
 */
size_t print_folder(const list_t *head)
{
	size_t nodes = 0;

	while (head != 0)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("%s\n", head->str);

		nodes++;
		head = head->next;
	}
	return (nodes);
}

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
			free(value);
			return (strtok(NULL, "="));
		}
		free(environ_string);
		i++;
	}
	return (NULL);
}

/**
 * _setenv - changes or adds an environment variable
 * @name: the variable name
 * @value: tha variable value
 * @overwrite: value is changed if overwrite is nonzero
 */
int _setenv(const char *name, const char *value, int overwrite)
{
	char *set, *folder;
	list_t *endnode, **head;
	/*a new pointer temp which position we will advance to the last node*/
	list_t *temp;
	int i = 0;
	char *newname;
	// realloc                                                                                                  

	newname = strdup(name);
	set = _getenv(name);
	if (set == NULL)
	{
		while(environ[i] != '\0')
			i++;
		environ[i] = strcat(newname, "=");
		environ[i] = strcat(environ[i], value);
		environ[i+1] = '\0';
		i = 0;
		while(environ[i] != '\0')
		{
			printf("ENVIRON after strcat = %s\n",environ[i]);
			i++;
		}
	}
	else
	{
	}
	return (0);
}
void main()
{
	_setenv("HELLO", "HELLO WORLD", 1);
}
