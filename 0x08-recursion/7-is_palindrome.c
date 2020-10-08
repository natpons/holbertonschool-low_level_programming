#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion  - returns the lenght of a string s
 * @s: a pointer to a string
 *
 * Return: the lenght of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checking
 * @s: a string
 * @start: first char of the string
 * @end: last char of the string
 *
 * Return: 1 - Success, 0 - Error
 */

int check_palindrome(char *s, int start, int end)
{
	if (s[start] != s[end - start])
		return (0);

	else if (start == ((end + 1) / 2))
		return (1);

	return (check_palindrome(s, ++start, end));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * An empty string is a palindrome
 * @s: a string
 *
 * Return: 1 - Success, 0 - Error
 */

int is_palindrome(char *s)
{
	int _strlen = _strlen_recursion(s) - 1;

	if (_strlen <= 0)
		return (1);

	return (check_palindrome(s, 0, _strlen));
}
