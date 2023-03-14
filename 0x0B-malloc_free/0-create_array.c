#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes
 *@c: address of memory to print
 *@size: size of memory to print
 *Return: various returns
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *ptr;

	if (size == 0)
	{
	return (NULL);
	}
	ptr = (char *) malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
	return (0);
	}
	while (a < size)
	{
	*(ptr + a) = c;
	a++;
	}
	*(ptr + a) = '\0';
	return (ptr);
}
