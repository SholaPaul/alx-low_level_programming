#include <stdio.h>

/**
 * main - program prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Good)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
