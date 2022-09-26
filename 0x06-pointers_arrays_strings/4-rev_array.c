#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the pointer to the array
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i <= n; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		n--;
	}
}
