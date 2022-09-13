#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase followed by a new line
 * Return: nothing.
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
