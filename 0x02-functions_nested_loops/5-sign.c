#include"main.h"

/**
 * print_sign - checks for alphabets
 * @n: character to be checked
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
	int print_sign(int n)
{
	if (n > 0)
{
	putchar('+');
	return (1);
}
	else if (n == 0)
{
	putchar('0');
	return (0);
}
	else
{
	putchar('-')
	return (-1);
}
}
