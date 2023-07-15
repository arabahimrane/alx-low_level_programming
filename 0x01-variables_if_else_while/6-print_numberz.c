#include <stdio.h>
/**
 * main -Entry point of the program
 * Prints the numbers from 0-9.
 *
 * Return: 0 on success
 */
int main(void)
{
    int i = 0;
    while (i < 10)
    {
        putchar(i);
        i++;
    }
    putchar('\n');
    return (0);
}
