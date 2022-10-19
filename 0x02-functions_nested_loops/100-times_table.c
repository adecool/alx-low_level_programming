#include "main.h"
/**
 * print_times_table - times table
 * @n: number to check
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	if (n != 15 || n != 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				printf("%d, ", i * j);
			}
			printf("\n");
		}
	}
}
