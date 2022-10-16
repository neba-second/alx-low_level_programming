#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: the pointer to the string
 *
 * Return: a pointer to the string
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if (*str == ',' || *str == ';' || *str == '.' || *str == '!' ||*str == '?'
			|| *str == '"' || *str == '(' || *str == ')' ||
			*str == '{' || *str == '}' || *str == ' ' || *str == '\t')
		{
			*(str + 1) -= 32;
		}
		else if (*str == '\n')
		{
			/*_putchar('\n');*/
			*(str + 1) -= 32;
		}
		str++;
	}
	return (ptr);
}
