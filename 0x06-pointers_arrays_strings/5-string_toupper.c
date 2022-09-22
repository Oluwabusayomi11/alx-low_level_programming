#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string
 *
 * Return: pointer to str
 */

char *string_toupper(char *s)
{
	char *str = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (str);
}
