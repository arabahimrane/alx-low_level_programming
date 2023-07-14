#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase and uppercase,
 *              followed by a dollar sign and a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	char bigLetter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (bigLetter = 'A'; bigLetter <= 'Z'; bigLetter++)
		putchar(bigLetter);

	putchar('$');
	putchar('\n');

	return (0);
}
