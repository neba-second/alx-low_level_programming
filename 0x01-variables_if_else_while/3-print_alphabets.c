#include <stdio.h>

/**
 * main - entery point
 *
 * Return: always 0
 *
 *
 */
int main(void)
{
	int sma = 97;
	int cap = 65;

	while (sma <= 122)
	{
		putchar(sma);
		sma++;
	}
	while (cap <= 90)
	{
		putchar(cap);
		cap++;
	}
	putchar('\n');
	return (0);
}
