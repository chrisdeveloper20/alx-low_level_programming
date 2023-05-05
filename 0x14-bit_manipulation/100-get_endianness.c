#include "main.h"

/**
 * get_endianness - Determines if the current machine uses
 *                  little or big endian byte ordering.
 *
 * Return: 0 if the machine uses big endian byte ordering.
 *         1 if the machine uses little endian byte ordering.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
