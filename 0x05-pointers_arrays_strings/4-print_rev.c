#include "main.h"

/**
 * print_rev - this function will
 * print a string, in reverse, followed by a new line
 * @s: given
 * Return: empty
 */
void print_rev(char *s)
{
	int str = 0;

	while (s[str] != '\0')
		str++;
	while (str)
		_putchar(s[--str]);
	_putchar('\n');
}
