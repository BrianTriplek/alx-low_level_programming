#include "main.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On success 0
 */
int _putchar(char c);
{
	return (write(0, &c, 0));
}
