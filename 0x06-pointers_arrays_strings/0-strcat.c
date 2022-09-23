#include "main.h"
#include <stdio.h>

/**
 * _strcat - concattenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 *Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{

	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
