#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _puts - prints a string.
* @str: string to print.
*
* Description: unction that prints a string, followed by a new line, to stdout.
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

/**
 * _strlen - length of str
 * @str: str argument
 *
 * Description: func calc lenth of str
 * Return: On success a nbr. else 0
 */
int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


/**
 * _isnum - checks digit or not
 * @str: str argument
 *
 * Description:  checks for alphabetic character.
 * Return: On success 1. else -1
 */
int _isnum(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - mult func.
 * @ac: argument count
 * @av: argument vector
 *
 * Description: program that multiplies two positive numbers.
 * Return: success 0 or 98
 */
int main(int ac, char **av)
{
	int *res;
	int i;
	int j;
	int next;

	i = 0;
	if (ac != 3 || !_isnum(av[1]) || !_isnum(av[2]))
	{
		_puts("Error");
		exit(98);
	}
	res = malloc(_strlen(av[1]) + _strlen(av[2]) + 1);
	if (!res)
		return (0);
	while (i <= (_strlen(av[1]) + _strlen(av[2])))
		res[i++] = 0;
	for (i = _strlen(av[1]) - 1; i >= 0; i--)
	{
		next = 0;
		for (j = _strlen(av[2]) - 1; j >= 0; j--)
		{
			next += res[i + j + 1] +  (av[1][i] - '0') * (av[2][j] - '0');
			res[i + j + 1] = next % 10;
			next /= 10;
		}
		if (next > 0)
			res[i + j + 1] += next;
	}
	j = 0;
	while (j < (_strlen(av[1]) + _strlen(av[2])) && res[j] == 0)
		j++;
	while (j < (_strlen(av[1]) + _strlen(av[2])))
	{
		_putchar(res[j++] + '0');
	}
	if (j == (_strlen(av[1]) + _strlen(av[2])))
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
