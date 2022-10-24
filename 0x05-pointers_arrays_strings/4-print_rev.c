#include "main.h"

/**
 * print_rev - this function will
 * print a string, in reverse, followed by a new line
 * @s: given
 * Return: empty
 */
void print_rev(char *s)
{
	int i, j, lent;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	lent = i;

	for (j = lent - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
