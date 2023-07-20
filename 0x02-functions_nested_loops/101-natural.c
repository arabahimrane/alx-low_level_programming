#include <stdio.h>

/**
 * sum_multiples - Computes the sum of all multiples of 3 or 5 below a given limit.
 * @limit: The limit below which to find multiples.
 *
 * Return: The sum of all multiples of 3 or 5 below the limit.
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}

