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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
