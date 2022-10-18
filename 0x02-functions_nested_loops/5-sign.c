#include "main.h"

/**
 * print_sign - a orogram that orints the sign of a number.
 * @n: character given.
 * Return: 1 and prints + if n is greater than zero
 * or 0 and prints 0 if n is zero
 * and -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
	else
	{
		_putchar('0');
	return (0);
	}
	}
