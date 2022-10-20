#include "main.h"
/**
 * largest_number - returns the largest number
 * @s: first value
 * @v: second value
 * @z: third value
 * Return: largest number
 */
int largest_number(int s, int v, int z)
{
	int largest;

	if (s > v)
	{
		if (v > z)
			largest = s;
		else if (s > z)
			largest = s;
		else
			largest = z;
	}
	else
	{
		if (v < z)
			largest = z;
		else
			largest = v;
	}
	return (largest);
}
