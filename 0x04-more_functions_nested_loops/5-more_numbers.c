#include "main.h"
/**
 * more_numbers - prints 0 to 14 ten times
 * Return: Always 0
 */
void more_numbers(void)
{
	int a, num;

	for (a = 1; a <= 10; a++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar('a');
			_putchar(num % 10 + '0');
		}

		_putchar('\n');
	}
}
