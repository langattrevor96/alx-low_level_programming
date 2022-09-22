#include "main.h"
/**
 * _strncpy -  a function that coples a string
 * if length of src is less than n additional null bytes are written to dest
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes to be used
 * Return: pointer to deestination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int byteCount;

	for (byteCount = 0; byteCount < n && src[byteCount] != '\0'; byteCount++)
	dest[byteCount] = src[byteCount];
	for (; byteCount < n; byteCount++)
	dest[byteCount] = '\0';

	return (dest);
}
