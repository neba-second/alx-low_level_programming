#include "main.h"

/**
 * _isdigit - checks if number is 0-9
 * @c: the number to check
 * Return: 1 if is digit 0 otherwise
 */

int _isdigit(int c)
{
	char i;

	for (i = 48; i <= 57;)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			i++;
			continue;
		}
	}
	return (0);
}
