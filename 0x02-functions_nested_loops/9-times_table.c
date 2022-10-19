#include "main.h"
/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int nom, malt, prot;

	for (nom = 0; nom <= 9; nom++)
	{
		_putchar('0');

		for (malt = 1; malt <= 9; malt++)
		{
			_putchar(',');
			_putchar(' ');

			prot = nom * malt;

			if (prot <= 9)
				_putchar(' ');
			else
				_putchar((prot / 10) + '0');
			_putchar((prot % 10) + '0');
		}
		_putchar('\n');
	}
}
