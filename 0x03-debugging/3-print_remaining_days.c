#include "main.h"
/**
 * print_remaining_days - select a date
 * and prints how many is left
 * @mth: month in number order
 * @dy: day of month
 * @yer: year
 * Return: void
 */
void print_remaining_days(int mth, int dy, int yer)
{
	if ((yer % 400 == 0) || (yer % 4 == 0 && yer % 100 != 0))
	{
		if (mth >= 3 && dy >= 60)
		{
			dy++;
		}
		printf("dy of the yer: %d\n", dy);
		printf("Remaining days: %d\n", 366 - dy);
	}
	else
	{
		if (mth == 2 && dy == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", mth, dy - 31, yer);
		}
		else
		{
			printf("Dy of the yer: %d\n", dy);
			printf("Remaining days: %d\n", 366 - dy);
		}
	}
}
