#include <stdio.h>

/**
 * main - program will print all possible combinations of single-digit numbers
 * Return: Always 0 (Good)
 */
int main(void)
i{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 9)
		{
i			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
