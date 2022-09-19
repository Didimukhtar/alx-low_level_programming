#include "main.h"

/**
 * puts2 - print every other character in a string
 * @str: String to print
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int n = 0; /* next index to print */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i != n)
			continue;
		_putchar(str[i]);
		n = i + 2;
	}
	_putchar('\n');
}
