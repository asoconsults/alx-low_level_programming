#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: array values
 * @n: numbers of array values
 */
void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != n - 1)
			printf(", ");
	}
	printf("\n");
}
