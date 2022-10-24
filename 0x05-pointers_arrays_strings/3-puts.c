#include "main.h"

/**
 * _puts - function will print a string, followed by a new line, to stdout
 * @str: as given
 * Return: 0
 */

void _puts(char *str)
{
	int string = 0;

	while (s[string] != '\0')
	{
		_putchar(s[string]);
		string++;
	}
	_putchar('\n');
}
