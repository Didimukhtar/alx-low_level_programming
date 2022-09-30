#include "main.h"
#include <string.h>

/**
 * _strstr - a function that locates a substring
 *
 * @haystack: input string to search for matching
 *            substrings
 * @needle: subtring to search for
 *
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
	if (!*haystack)
		return (NULL);
	else if (*haystack == *needle)
		return (haystack);
	return (_strstr(haystack + 1, needle));
}
