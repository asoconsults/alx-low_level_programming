#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: input
 * Return: first character
 */
void puts2(char *str)
{
	int e = 0;

	for (; str[e] != '\0' e++)
	{
		if ((e % 2) == 0)
			_putchar(str[e]);
		else
			continue;
	}
	_putchar('\n');
}
