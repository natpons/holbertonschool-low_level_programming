#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
*_isalpha - Checks if a char is a letter
*@c: a char
*
*Return: 1 if c is lowercase, o if isn't
*/

int _isalpha(int c)
	{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
}
	else
	{
	return (0);
	}
}

