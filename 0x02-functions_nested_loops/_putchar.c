#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character C to stdout
 * @c: the character to print
 *
 * return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

