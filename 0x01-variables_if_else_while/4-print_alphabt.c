#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char ch = 'a';

/* Holds the value of (a-z)*/

		while (ch <= 'z')

		{
			/* logical operator to get rid of 'e' and 'q'*/
			if (ch != 'e' && ch != 'q')
			{
				putchar(ch);
			}
			++ch;
		}
		putchar('\n');
		return (0);
}
