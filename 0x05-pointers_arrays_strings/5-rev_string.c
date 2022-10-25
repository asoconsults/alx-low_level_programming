#include "main.h"
/**
 * rev_string - that reverses a string
 * @s: input
 * Return: string that are reverse
 */
void rev_string(char *s)
{
	char re = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		re = s[i];
		s[i] = s[c];
		s[c] = re;
	}
}
