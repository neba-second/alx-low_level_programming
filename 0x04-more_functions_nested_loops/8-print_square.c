#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: no return
 */
void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = size; i > 0; i--)
		{
			for (j = size; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
