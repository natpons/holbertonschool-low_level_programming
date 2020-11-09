#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stoutput
 * @letters: the number of letters it should read and print
 * @filename: a pointer to the name of the file
 *
 * Return: the actual number of letters it could read and print
 * the file can not be opened or read, return 0
 * the filename is NULL return 0
 * write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd1, fd2, fd3;
	char *buffer;

	/*if filename is NULL return 0*/
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	/*if the file can not be opened or read, return 0*/
	if (buffer == NULL)
		return (0);

	fd1 = open(filename, O_RDONLY);
	fd2 = read(fd1, buffer, letters);
	fd3 = write(STDOUT_FILENO, buffer, fd2);

	/*if write fails or does not write the expected amount of bytes, return 0*/
	if (fd1 == -1 || fd2 == -1 || fd3 == -1 || fd3 != fd2)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd1);

	return (fd3);
}
