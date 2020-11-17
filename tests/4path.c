#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct list_s
{
	char *str;
	struct list_s *next;
} list_t;
char *_getenv(const char *name);
list_t *folder(list_t **head, const char *str);
extern char **environ;

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

int main(void)
{
	list_t *new;
	size_t n;
	char *path, *folder;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	printf("%s\n", _getenv("PATH"));
	path = _getenv("PATH");
	folder = strtok(path, ":");
	while(folder != NULL)
	{
		new->str = folder;
		new->next = NULL;
		n = print_folder(new);
		printf("-> %lu elements\n", n);
		folder = strtok(NULL, ":");
	}
	return (0);
}
