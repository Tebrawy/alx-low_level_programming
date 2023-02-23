#include "main.h"

/**
 * print_most_numbers - Print numbers from 0 to 9 except 2 and 4
 * Return: Always 0
 */

void print_most_numbers
{
	int i;

	for  (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
			return (0);
		else 
			_putchar(i);
	}

	_putchar('\n');
}
