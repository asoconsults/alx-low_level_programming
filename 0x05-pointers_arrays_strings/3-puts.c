#include "main.h"
/**
 * _puts - prints a number
 * @str: numbers to be printed
 */
void _puts(char *str)
{
	while (str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
