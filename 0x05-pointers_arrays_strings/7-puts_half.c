#include"main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 * Return: Void
*/

void puts_half(char *str)
{
	int L, n;

	for (L = 0; str[L] != '\0'; ++L)
		;

	if (L % 2 == 0)
	{
		for (n = L / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	} else
	{
		for (n = ((L - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	_putchar('\n');
}
