#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 - 9
 * (neither 2 or 4)
 * Return: no return
 */
void print_most_numbers(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		if (ch == 50 || ch == 52)
	{
		continue;
	}
		else
		{
			_putchar(ch);
	}
	}
	_putchar('\n');
}
