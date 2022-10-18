#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: void
 */

void print_alphabet(void)
{
	int i;
	char c = 'a';

	for (i = 0; i <= 9; i++)
	{
		for (; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
