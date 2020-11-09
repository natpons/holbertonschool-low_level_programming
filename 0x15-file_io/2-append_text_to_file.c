#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
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

	fd1 = open(filename, O_WRONLY | O_APPEND);
	fd2 = write(fd1, text_content, lenght);

	/*-1 on failure*/
	if (fd1 == -1 || fd2 == -1)
		return (-1);

	close(fd1);

	return (1);
}
