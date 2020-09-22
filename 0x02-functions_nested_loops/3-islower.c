#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
*int_islower(int c) - checks for lowercase character
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
