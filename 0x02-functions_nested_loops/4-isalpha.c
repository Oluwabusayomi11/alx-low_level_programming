#include "main.h"

/**
 * _isalpha - checks if the character is a letter
 * Return: 1 if true,0 otherwise
 */
int _isalpha(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <='Z'; upper++)
		{
			if (c == lower || c ==upper)
				isLetter = 1;
		}
	}
	return (isLetter);
}
