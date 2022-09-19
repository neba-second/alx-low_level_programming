#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first var
 * @b: the second var
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
