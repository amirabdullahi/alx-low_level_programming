#include"main.h"
/**
 * _pow_recursion - raises x to the power of y
 * @x: value to be powered
 * @y: value of power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y >= 0)
	return (x * _pow_recursion(y + 1));
}
