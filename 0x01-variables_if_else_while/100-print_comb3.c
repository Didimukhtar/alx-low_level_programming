#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - print all possible different combinations of two digits
 *
 * Return: Always(0)
 */

int main(void)
{
	/* Input two numbers*/
		int a, b;

		for (a = 48; a <= 56; ++a)
		{
			for (b = 49; b <= 57; ++b)
			{
				if (b > a)
				{
					putchar(a);
					putchar(b);
					if (a != 56 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}

				}


			}



		}
	putchar('\n');
	return (0);
}
