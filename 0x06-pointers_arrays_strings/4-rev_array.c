#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
