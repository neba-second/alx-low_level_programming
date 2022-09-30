#include <stdio.h>

/**
 * main - prints it's name
 * @argc: count of arguments passed
 * @argv: pointer array of arguments
 *
 * Return: int zero
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
