#include "main.h"

/**
 * _strcpy - copies the string pointer to another pointer
 * @dest: destination to be copied into
 * @src: source from where copied
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
