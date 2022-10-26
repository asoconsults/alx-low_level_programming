#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int d;
	int s;

	for (d = 0; d < n; d++)
	{
		n--;
		s = a[d];
		a[d] = a[n];
		a[n] = s;
	}
}
