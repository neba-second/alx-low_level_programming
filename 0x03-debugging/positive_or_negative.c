#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entery point
 *
 * Return: always 0
 *
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
