#include <stdio.h>

/**
 * main - computes and prints the sum of all natural nums below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
	return (0);
}
