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
	int i, j;
	int result = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
				result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
