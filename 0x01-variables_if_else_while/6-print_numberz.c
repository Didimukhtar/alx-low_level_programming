#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all single base 10 digits using putchar
 *
 * Return: Always 0(success)
 */
int main(void)
{
		int num;

		for (num = 48; num < 58; ++num)
		{
			putchar(num);
		}
	putchar('\n');
	return (0);
}
