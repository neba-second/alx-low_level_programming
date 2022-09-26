#include "main.h"

/**
 * string_toupper - chnages the lowercase letters to upper
 * @str: the pointer to the string
 *
 * Return: pointer to the string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
