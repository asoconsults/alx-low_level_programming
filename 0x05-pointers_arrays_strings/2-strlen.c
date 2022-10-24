#include "main.h"
/**
 * _strlen - return the length of a value
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lgt = 0;

	while (*s != '\0')
	{
		lgt++;
		s++;
	}
	return (lgt);
}
