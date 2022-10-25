#include "main.h"
/**
 * _strcpy - copies the string pointed
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int lgt = 0;

	while (*(src + lgt) != '\0')
	{
		*(dest + lgt) = *(src + lgt);
		lgt++;
	}
	*(dest + lgt) = '\0';
	return (dest);
}
