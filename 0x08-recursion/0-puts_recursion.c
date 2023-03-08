#include "main.h"

/**
 * _puts_recursion : prints characters of a string
 * @s : character to be printed
 * Return : no return
 */
	void _puts_recursion(char *s)
	{
	if (*s)
	{
		_putchar(s);
	       _puts_recursion(s + 1);
	}
	else

	_putchar('\n');
	}
