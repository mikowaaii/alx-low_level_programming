#include "main.h"

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59
 *
 * Return: returns void
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
	return;
}

