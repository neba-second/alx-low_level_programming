#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers to 98
 * @n: starting point for the program
 *
 * Return: no return
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
}
