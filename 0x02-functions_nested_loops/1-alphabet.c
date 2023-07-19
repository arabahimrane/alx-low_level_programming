#include "main.h"
11;rgb:0000/0000/0000
/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	  _putchar(letter);
	  letter++;
	}
	_putchar('\n');
	return (0);
}
