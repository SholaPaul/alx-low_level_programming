#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: as given
 * Return: 0
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
