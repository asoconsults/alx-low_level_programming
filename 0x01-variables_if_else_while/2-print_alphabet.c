#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase
 * Return: Always 0 (correct)
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchart('\n');
	return (0);
}
