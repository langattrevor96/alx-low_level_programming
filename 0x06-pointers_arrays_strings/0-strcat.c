#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to sourcestring
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	m = 0;
	n = 0;

	while (dest[m] != '\0')
	{
		m++;
	}

	while (src[n] != '\0')
	{
		dest[m] = src[n];
		n++;
		m++;
	}

	dest[m] = '\0';
	return (dest);
}
