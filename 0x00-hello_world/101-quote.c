#include <unistd.h>
/**
 * main - Entry point
 * A C program that prints a string to the stderr using write function
 * Return: Always 1 (failure)
 */
int main(void)
{
	 char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, 59);
	return (1);
}
