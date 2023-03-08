#include "main.h"
/**
 * _print_rev_recursion - prints characters in reverse
 * @s : character to be printed
 * Return : No return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_print_rev_recursion(s + 1);
	}
	}
