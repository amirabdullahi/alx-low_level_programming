#include <stdio.h>
#include <stdlib.h>
/**
 * main- adds positive integer numbers
 * @argc: number count
 * @argv: array count
 * Return: Error else 1
 */
int main(int argc, char *argv[])
{
	int sum, num, f, h, i;

	sum = 0;
	for (f = 1; f < argc; f++)
	{
		for (h = 0; argv[f][h] != '\0'; h++)
		{
			if (argv[f][h] > '9' || argv[f][h] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num >= 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
