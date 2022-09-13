#include <unistd.h>

/**
 * print_alphabet - Prints a-z in lowercase
 *
 * Return: returns nothing/void
 */
void print_alphabet(void)
{
	write(1, "void print_alphabet(void)\n");
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');

	return (0);
}
