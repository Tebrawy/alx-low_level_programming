#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: number of arguements
 * @argv: array of arguement
 *
 * Return: Always 0 (Success)
 */

int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
