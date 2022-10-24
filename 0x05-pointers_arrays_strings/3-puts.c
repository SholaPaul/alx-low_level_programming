#include "main.h"
#include "stdlib"

/**
 * _puts - function will print a string, followed by a new line, to stdout
 * @str: as given
 * Return: empty
 */

void _puts(char *str)
{
	int j = 0;

	while (*(str + j) != '\0')
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
