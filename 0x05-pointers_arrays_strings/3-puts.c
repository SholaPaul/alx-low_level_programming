#include "main.h"

/**
 * _puts - function will print a string, followed by a new line, to stdout
 * @str: as given
 * Return: empty
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
