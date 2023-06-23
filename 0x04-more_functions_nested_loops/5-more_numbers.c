#include "main.h"

/**
 * print_numbers_10_times - Prints 10 times the numbers from 0 to 14 followed by a new line.
 */
void print_numbers_10_times(void)
{
	int i, j;
	char digit;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
				digit = j + '0';
			else
			{
				digit = (j / 10) + '0';
				_putchar(digit);
				digit = (j % 10) + '0';
			}
			if (j != 14)
				_putchar(digit);
		}

		_putchar('\n');
	}
}
