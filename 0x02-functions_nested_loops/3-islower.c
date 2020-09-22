#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
*_islower - Checks for lowercase character
*@c: a char
*
*Return: 1 if c is lowercase, o if isn't
*/

int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
}
	else
	{
	return (0);
	}
}
