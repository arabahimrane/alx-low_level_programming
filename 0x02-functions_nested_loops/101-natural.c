#include <stdio.h>

/**
 * sum_multiples - Computes the sum of all multiples of 3 or 5 below a given limit.
 * @limit: The limit below which to find multiples.
 *
 * Return: The sum of all multiples of 3 or 5 below the limit.
 */
int sum_multiples(int limit)
{
    int sum = 0;
    int i;

    for (i = 0; i < limit; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

int main(void)
{
    int limit = 1024;
    int result = sum_multiples(limit);

    printf("The sum of all multiples of 3 or 5 below %d is: %d\n", limit, result);

    return 0;
}
