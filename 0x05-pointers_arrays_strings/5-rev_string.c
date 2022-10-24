#include "main.h"

/**
 * rev_string - reverses a string
 * @s: as given
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, lent;

	len = 0;
	lent = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lent = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lent];
		s[lent--] = tmp;
	}
}
