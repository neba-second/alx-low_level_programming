#include <stdio.h>

/**
 * main - Entery point
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
		putchar('\n');
	return (0);
}
