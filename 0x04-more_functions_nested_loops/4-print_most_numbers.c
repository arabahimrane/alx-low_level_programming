#include "main.h"

/**
* print_most_numbers - Print nbrs.
* Description : function that prints the numbers
* (not 2 and 4), from 0 to 9 \n.
*/
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		++i;
	}
	_putchar('\n');
}
