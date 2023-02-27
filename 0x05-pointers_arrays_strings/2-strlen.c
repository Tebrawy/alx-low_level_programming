#include "main.h"

/**
 * _strlen - gives back the length of the string
 * @s: string
 * Return: length
 */

int _strleng(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
