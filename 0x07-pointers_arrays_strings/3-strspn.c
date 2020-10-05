#include "holberton.h"

/**
 * unsigned int _strspn - gets the length of a prefix substring
 *
 * @s: initial segment
 * @accept: bytes for s
 *
 * Return:  the number of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0';j++);
		{
			if (s[i] == accept[j])
					k++;
		}
		i++;
	}
	return(k);
}	
