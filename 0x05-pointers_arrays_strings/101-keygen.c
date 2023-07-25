#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[69];
	int i;
	int sum;
	sum = 0;
	i = -1;

	srand(time(NULL));

	while (++i < 69)
	  {

	    password[i] = rand() % 126 + 1;
	    sum += password[i];
	    putchar(password[i]);
	  }


	if ((2772 - sum) > 0 && (2772 - sum) < 127)
	  {
	    putchar(2772 - sum);
	  }
	else
	  {
	    putchar(rand() % 125 + 1);
	  }

	return (0);
}
