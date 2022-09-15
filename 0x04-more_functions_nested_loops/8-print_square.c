#include "main.h"

/**
 * print_square - function that checks for uppercase character.
 * @size: the int for the paramaters of my function
 *
 * Return: Null
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
