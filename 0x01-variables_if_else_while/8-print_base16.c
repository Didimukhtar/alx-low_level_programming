#include <stdio.h>
/**
 * main - Entry point
 *
 *  * Description - Print all the numbers of base 16 in lowercase
 *
 * Return: Always(0)
 */

int main(void)
{
		int num;
		char ch;

			for (num = 48; num < 58; ++num)
			{
				putchar(num);
			}
			for (ch = 'a'; ch <= 'f'; ++ch)
			{
				putchar(ch);
			}
		putchar('\n');
		return (0);
}
