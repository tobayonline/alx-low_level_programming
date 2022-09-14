#include <unistd.h>

/**
 * main - Prints _putchar on the screen
 *
 * Return: On success, 0.
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
