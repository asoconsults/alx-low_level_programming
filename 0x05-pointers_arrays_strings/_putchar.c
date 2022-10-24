#include <unistd.h>

/**
 * _putchar - write letter c to stdout
 * @c: char to be printed
 * Return: success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
