#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int L; /*Declare a variable to hold length*/

	L = 0; /*Set value at 0*/

	while (s[L] != '\0') /*while loop*/
	{
		L++;
	}

	return (L);
}
