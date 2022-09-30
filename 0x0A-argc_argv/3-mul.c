#include <stdio.h>
#include <stdlib.h>
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
	int num1, num2, product;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		product = num1 * num2;
		printf("%d\n", product);
	}
	return (0);
}
