#include <stdlib.h>
#include <time.h>
/* A C program to  */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
{
		printf("n is positive\n");
	}
	else if (n == 0)
{
		printf("n is 0\n");
	}
	else
{
		printf ("n is negative\n");
	return (0);
}
