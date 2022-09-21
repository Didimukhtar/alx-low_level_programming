#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: a string pointer
 * @src: another string pointer
 * @int n - 
 * Return: a string pointer
 */

char *_strncat(char *dest, char *src, int n)

{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
