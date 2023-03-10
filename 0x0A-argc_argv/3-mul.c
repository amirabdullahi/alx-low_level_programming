#include <stdio.h>
#include <stdlib.h>
/**
 * main- mulitiplies two numbers
 * @argc: number count
 * @argv: array count
 * Return: Error else 1
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	mult = atoi(argv[1] * atoi(argv[2]);
			printf("%d\n", mult);
			return (0);
}

