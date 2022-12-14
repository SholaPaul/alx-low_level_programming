#include "main.h"

/**
 * *_strcpy - function copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer as given
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int lent, i;

	len = 0;

	while (src[lent] != '\0')
	{
		lent++;
	}

	for (i = 0; i < lent; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
