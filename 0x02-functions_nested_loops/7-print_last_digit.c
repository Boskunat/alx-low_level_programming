#include "main.h"
/**
 * print_last_digit - function that pring the last digit of a number
 * @n: input letter
 * Return: Always success
 */
int print_last _digit(int n)
{

	int p;
	p = (n %  10);

	if (p < 0)
	{

		p = (-1 * p);
	}

	_putchar(p + '0');

	return (p);
}

