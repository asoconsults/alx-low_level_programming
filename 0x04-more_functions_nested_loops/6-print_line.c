#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a straight
 * @n: the number to be printed
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
