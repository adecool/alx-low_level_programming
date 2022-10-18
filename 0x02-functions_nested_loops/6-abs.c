#include "main.h"
/**
 * _abs - Entry point
 * @n: character to check
 * Return: 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		n *= -1;
		_putchar(n);
	}
}
