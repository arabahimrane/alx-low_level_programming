
0;276;0c#include "main.h"

/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the input string.
 *
 * Return: The length of the string (excluding the null-terminator).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	  {
	    length++;
	  }

	return length;
}
