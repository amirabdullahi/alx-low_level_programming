#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: address of memory to print
 * Return: NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *gif;
	int a, b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	gif = malloc(sizeof(char) * (a + 1));
	if (gif == NULL)
	{
		return (NULL);
	}
	for (b = 0; str[b]; b++)
	{
		gif[b] = str[b];
	}
	return (gif);
}
