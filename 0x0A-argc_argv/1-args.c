#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of arguments
 * @argc: counts number of values
 * @argv: array count
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
