#include "main.h"

/**
 * puts_half - finvtion prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int lent, n, i;

	lent = 0;

	while (str[lent] != '\0')
	{
		lent++;
	}

	if (lent % 2 == 0)
	{
		for (i = lent / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (lent % 2)
	{
		for (n = (lent - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
