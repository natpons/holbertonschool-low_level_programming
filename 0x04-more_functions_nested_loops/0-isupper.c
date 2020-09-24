#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
  *_isupper - Checks for uppercase character
  *@c - a int
  *
  *Return: 1 if c is uppercase, o otherwise
  */

int _isupper(int c)
	{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
