#include "main.h"
#include <ctype.h>

/**
 * 0_isupper - Checks for uppercase ASCII characters
 * @c: This is an ASCII character
 *
 * Return: 0 if not uppercase, 1 if uppercase
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);

