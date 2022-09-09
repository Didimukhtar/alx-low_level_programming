#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all numbers in base 10 from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int num;

		for (num = 0; num < 10; ++num)
		{
			printf("%i", num);
		}
		printf("\n");
		return (0);
}
