#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: a variable is a pointer to a char type
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
		return (0);

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * new_dog - creates a new dog
 *
 * @name: pointer to a dog's name
 * @age: dog's age
 * @owner: pointer to owner's name
 * Return: the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *newname;
	char *newowner;
	int i;

	/*allocation the memory for the new_dog*/
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	/*allocation the memory to store a copy of name*/
	newname = malloc((_strlen(name) + 1) * sizeof(char));
	if (newname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	/*copy of the name*/
	for (i = 0; i < _strlen(name); i++)
		newname[i] = name[i];
	newname[i] = '\0';
	(*ndog).name = newname;

	/*allocation the memory to store a copy of owner*/
	newowner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (newowner == NULL)
	{
		free(newname);
		free(ndog);
		return (NULL);
	}
	/*copy of the owner*/
	for (i = 0; i < _strlen(owner); i++)
		newowner[i] = owner[i];
	newowner[i] = '\0';
	(*ndog).owner = newowner;
	/*the age*/
	(*ndog).age = age;
	return (ndog);
}
