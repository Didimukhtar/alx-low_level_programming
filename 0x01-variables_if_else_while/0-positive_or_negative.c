#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/** 
 * Main - Entry point
 * 
 * A C program to print value of n
 * 
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	/*code*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)

		printf("%d is 0\n", n);
	else
		printf ("%d is negative\n", n);
	return (0);
}
