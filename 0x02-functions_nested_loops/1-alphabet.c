#include "main.h"
/**
 * print_alphabet - Entry point
 * Return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
