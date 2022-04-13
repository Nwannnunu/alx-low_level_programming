#include "main.h"

/**
 *jack_bauer - prints every minute of the day of
 *             jack bauer, starting from 00:00 to 21:59
 *jack_bauer: print every minute of the day.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 60; minute++)
		{
			printf("%02d:%02d\n" hour, minute);
		}
	}
}
