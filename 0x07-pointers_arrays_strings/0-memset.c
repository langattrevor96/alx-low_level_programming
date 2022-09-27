#include <stdio.h>
/**
 * _memset -  it fills memory with a constant byte
 * @n:  bytes memory
 * @s: pointerblock of memory to fill
 * @b: value to set
 * Return: destination to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n j++)
	{
		s[j] = b;
	}
	return (s);
}
