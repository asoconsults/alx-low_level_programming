#include <stdio.h>

/**
 * main - print fizzbuzz
 * Return: Always 0
 */
int main(void)
{
	int x;

	printf("1");
	for (x = 0; x <= 100; x++)
	{
		printf(" ");
		if (x % 3 == 0)
			printf("Fizz");
		if (x % 5 == 0)
			printf("Buzz");
		if (x % 3 != 0 && x % 5 != 0)
			printf("%d", x);
	}
	printf("\n");
	return (0);
}
