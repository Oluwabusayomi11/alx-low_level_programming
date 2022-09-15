#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character
 *
 * Return: 1 if success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
