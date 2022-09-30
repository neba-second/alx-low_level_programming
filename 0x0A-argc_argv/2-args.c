#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: count of arguments passed
 * @argv: pointer array of arguments
 *
 * Return: int zero
 */
int main(__attribute__((unused)) int argc,
	__attribute__((unused)) char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
