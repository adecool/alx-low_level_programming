#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char lower = 'a';

	while (num <= 9)
	{
		putchar(num);
		num++;
	}

	while (lower <= 'f')
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');

	return (0);
}
