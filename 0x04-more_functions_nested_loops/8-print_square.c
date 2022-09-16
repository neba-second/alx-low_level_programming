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

	if (size != 0)
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
	else
	{
		_putchar('\n');
	}
}
