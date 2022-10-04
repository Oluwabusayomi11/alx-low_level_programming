#include "main.h"

int is_divisible(int num, int div);

/**
 * is_divisible - checks if the num is divisble
 * @num: number to check
 * @div: result
 *
 * Return: 1 if divisible, 0 if not
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if its a prime number
 * @n: number to be checked
 *
 * Return: 1 if it's prime ,0 if not
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n <= 3)
		return (1);

	return (is_divisible(n, div));
}
