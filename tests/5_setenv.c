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

/*prints all elements of a linked list*/
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

/**********************************/
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

/*****************  EX5 setenv ****************/
int _setenv(const char *name, const char *value, int overwrite)
{
	char *set, *folder;
	list_t *endnode, **head;
	/*a new pointer temp which position we will advance to the last node*/
	list_t *temp;

	set = _getenv(name);

	if (set == NULL)
	{
		endnode = malloc(sizeof(list_t));
		if (endnode == NULL)
			return (0);
		endnode->str = strdup(value);
		endnode->next = NULL;
	}
	print_folder(endnode);
	free(endnode->str);
	return (0);
}
void main()
{
	_setenv("HELLO", "HELLO WORLD", 1);
}
