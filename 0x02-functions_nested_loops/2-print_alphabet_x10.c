#include "main.h"

/**
 * main - print 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j
	char k

	for  (j = 0, j < 9, j++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('/n');
	}
}
