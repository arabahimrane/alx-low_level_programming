#include "main.h"

/**
* print_line - Print a simple line.
* @n: length of line.
* Description : Draw single line.
*/
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
