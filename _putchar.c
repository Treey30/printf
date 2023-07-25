#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to be printed
 * Return: number of bytes printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
