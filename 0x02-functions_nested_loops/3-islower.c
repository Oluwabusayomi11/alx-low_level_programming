#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char ch;
	int lower = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch == c)
			lower = 1;
	}

	return (lower);
}
