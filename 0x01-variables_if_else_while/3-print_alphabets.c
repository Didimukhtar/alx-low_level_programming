#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

/* Holds the value of (a-z)*/
	for (ch = 'a'; ch <= 'z'; ++ch)
		putchar(ch);
/* Holds the value of (A-Z)*/
	for (ch = 'A'; ch <= 'Z'; ++ch)
		putchar(ch);
	putchar('\n');
	return (0);
}


