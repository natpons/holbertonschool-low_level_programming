#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd1, fd2, lenght = 0;

	/*if filename is NULL return -1*/
	if (filename == NULL)
		return (-1);

	/*calculate the lenght of the string*/
	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}
	/*permission: rw-------*/
	fd1 = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fd2 = write(fd1, text_content, lenght);

	/*-1 on failure*/
	if (fd1 == -1 || fd2 == -1)
		return (-1);

	close(fd1);

	return (1);
}
