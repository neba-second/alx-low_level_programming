#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size if the triangle
 */
void print_triangle(int size)
{
	int sp;
	int i, j;

	if (size != 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (sp = size - i; sp > 0; sp--)
			{
				_putchar(' ');
			}
			for (j = i; j > 0; j--)
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
