#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
