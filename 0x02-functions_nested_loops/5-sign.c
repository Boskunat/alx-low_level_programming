#include "main.h"
/**
 * print_sing - function that prints the sign of a number
 * @n: input letter
 * Return: Always success
 */
int print_sign(int n)
{

	if (n > 0)

	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{

		_putchar('0');
		return (0);
	}

	else
	{

		_putcher('-');
		return (-1);
	}
}
