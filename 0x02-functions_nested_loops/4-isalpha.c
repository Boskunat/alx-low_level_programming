#include "main.h"
/**
 * _isalpha - functionn that checks for alphabetic character
 * @n: input letter
 * Return: Always success
 */
int _isalpha(int c)
{

	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

		return (1);

	else

		return (0);
}
