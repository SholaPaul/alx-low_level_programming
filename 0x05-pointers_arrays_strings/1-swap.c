#include "main.h"

/**
 * swap_int - function swaps value of two intergers
 * @a: as given
 * @b: as given
 * Return: 0 (success) and 1 (failure) to execute
 */
void swap_int(int *a, int *b)
{
	int j = *a;

	*a = *b;
	*b = j;
}
