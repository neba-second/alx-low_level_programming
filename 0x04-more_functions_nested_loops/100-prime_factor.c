#include "main.h"

/**
 * print_prime - prints prime factors of a number
 * @i: the number to be factorized
 * Return: no return
 */
void print_prime(long int i)
{
	int j = 2;

	while (i)
	{
		if (i % j == 0)
		{
			_putchar(j + ' ');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			j++;
		}
	}
}
