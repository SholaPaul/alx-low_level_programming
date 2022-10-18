#include "main.h"



/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 * Return: Always 0 (good)
 */

void print_alphabet(void)
{
	int p;

	for (p = 'a'; p <= 'z'; p++)
	_putchar(p);
	_putchar('\n');
}
