#include "main.h"
/**
 * _isalpha - Entry point
 * @c: character to check
 * Return: 1 or 0
 */

int _ialpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
