#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: input
 */
void puts_half(char *str)
{
	int lgt = 0;

	while (*str != '\0')
	{
		lgt++;
		str++;
	}

	str -= (lgt / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
