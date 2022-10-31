#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory
 *	area pointed to by @s with the constantbyte @b.
 * @s: Apointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *s, b;
	
	for (int index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
