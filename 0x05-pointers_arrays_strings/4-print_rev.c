#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: void
*/

void print_rev(char *s)
{
	int num;

	/*finds the length of string without null character*/
	for (num = 0; s[num] != '\0'; num++)
		;

	/*print char from the last index as you decrement*/
	for (num--; num >= 0; num--)
		_putchar(s[num]);
	_putchar('\n');
}
