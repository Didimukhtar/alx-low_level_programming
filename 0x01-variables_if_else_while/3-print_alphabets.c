/**
 * main - Entry point
 *
 * Description: the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

/* Holds the value of (a-z)*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
/* Holds the value of (A-Z)*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');
	return (0);
}


