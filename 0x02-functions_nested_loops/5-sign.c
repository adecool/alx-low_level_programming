#include "main.h"
/**
 * print_sign - Entry point
 * @n: character to check
 * Return: 1 or 0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
