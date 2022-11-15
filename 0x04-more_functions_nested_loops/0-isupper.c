#include <main.h>

/**
* _isupper - a function that checks for uppercase character
* @c: the int value to determine
* Return: 1 if c is uppercase
* and 0 otherwise.
*/

int _isupper(int c)
{
	char b = 'A';
	int isupper = '0';

	for (b = 'A'; b  <= 'Z'; i++)
	{
		if (c == b)
		{
			isupper = 1;
		}
	}
	return (isupper);
}
