#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{		
		putchar(ch);
		++ch;
	}	
		putchar('\n');
    return (0);
}

