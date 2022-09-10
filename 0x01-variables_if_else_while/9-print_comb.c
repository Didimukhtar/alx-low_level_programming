#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - print all single-digit numbers 1-9
 *
 * Return: Always(0)
 */

int main(void)
{
		int num;

		for (num = 48; num < 58; ++num)
		{
			putchar(num);
			if (num != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
