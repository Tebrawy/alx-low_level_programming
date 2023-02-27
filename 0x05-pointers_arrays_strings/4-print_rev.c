#include "main.h"
/**
 * print_rev - Reverse the string
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int i = 0;
	int m;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (m = i; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
