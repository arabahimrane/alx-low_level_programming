#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * greater than or less than 5, or is zero..
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;
    const char *info;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    lastDigit = n % 10;

    if (lastDigit == 0)
    {
        info = "and is 0";
    }
    else if (lastDigit > 5)
    {
        info = "and is greater than 5";
    }
    else if (lastDigit < 6)
    {
        info = "and is less than 6 and not 0";
    }
    printf("Last digit of %d is %d %s\n", n, lastDigit, info);

    return (0);
}
