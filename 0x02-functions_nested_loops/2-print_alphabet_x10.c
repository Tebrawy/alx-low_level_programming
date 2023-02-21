#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char letter;
	int j = 0;

	while (j < 10)
	{
		j++;
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter'\n');
	}
	_putchar('\n');
}
