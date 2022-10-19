#include "main.h"
/**
 * print_alphabet_x10.c - print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int ton;
	char le;

	for (ton = 0; ton <= 9; ton++)
	{
		for (le = 'a'; le <= 'z'; le++)
			_putchar(le);
		_putchar('\n');
	}
}
