#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting with 0.
 * @n: The number for which the times table will be printed.
 */
void print_times_table(int n)
{
	int row;
	int col;
	int tmp;

	if (n < 15 && n >= 0)
	{
		row = -1;
		while (++row <= n)
		{
			col = -1;
			tmp = 0;
			while (++col <= n)
			{
				if (tmp >= 100)
				{
					_putchar((tmp / 100) + '0');
					_putchar(((tmp % 100) / 10) + '0');
				}
				else if (tmp < 100 && tmp >= 10)
				{
					_putchar(' ');
					_putchar((tmp / 10) + '0');
				}
				else if (col > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((tmp % 10) + 48);
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				tmp += row;
			}
			_putchar('\n');
		}
	}
}
