#include "main.h"

/**
 * jack_bauer- prints every minute of the day
 */

void jack_bauer(void)
{

	int mins, hour, min;

	for (mins = 0; mins < (60 * 24); mins++)
	{
		hour = mins / 60;
		min = mins % 60;
		_putchar(48 + (hour / 10));
		_putchar(48 + (hour % 10));
		_putchar(':');
		_putchar(48 + (min / 10));
		_putchar(48 + (min % 10));
		_putchar('\n');
	}
}

