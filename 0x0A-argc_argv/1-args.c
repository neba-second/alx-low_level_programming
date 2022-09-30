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
	printf("%d\n", argc - 1);
	return (0);
}
