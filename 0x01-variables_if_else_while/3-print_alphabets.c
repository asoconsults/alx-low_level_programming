#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		purchar (ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		purchar (ch);
	purchar('\n');
	return (0);
}
