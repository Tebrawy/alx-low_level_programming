#include "main.h"
/**
 * _puts - Writes string to stdout
 * @str: string
 */

void _puts(char *str)
{
        while (*str != '\0')
        {
                _putchar(*str++);
        }
                _putchar('\n');
}
