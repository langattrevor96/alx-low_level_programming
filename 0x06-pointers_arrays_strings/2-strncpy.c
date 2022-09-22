#include "main.h"
/**
 * _strncat - two words
 * @dest: pointer to char param
 * @src: pointer to source
 * @n: in parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int i;

	m = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		k++;
	}

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[k + i] = src[i];
	}
	dest[k + i] = '\0';
	return (dest);
}
