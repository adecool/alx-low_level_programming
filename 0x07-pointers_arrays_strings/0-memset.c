#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory
 *	area pointed to by @s with the constantbyte @b.
 * @s: Apointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory @s.
 */

void *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	unsigned char *str = s;

	unsigned char value = b;

	for (i = 0; i < n; i++)
	{
		str[i] = value;
	}
	return (str);
}
