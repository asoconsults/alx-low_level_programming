#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	int d;

	d = 0;
	while (s1[d] != '\0' && s2[d] != '\0')
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
		i++;
	}
	return (0);
}
