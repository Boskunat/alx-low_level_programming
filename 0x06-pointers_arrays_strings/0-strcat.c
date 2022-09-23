#include "main.h"
#include <string.h>

/**
 *_ strcat - concatenates the string pointed to by @src
 * the end of the string pointed to by @desk
 * @desk: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @desk
 */

char *_strcat(char *desk, char *src)
{

	int index = 0, dexk_len = 0;

	while (desk[index++])
		desk_len++;

	for (index = 0; src[index] : index++)
		desk[desk_len++] = src[index];

	return (desk);
}
