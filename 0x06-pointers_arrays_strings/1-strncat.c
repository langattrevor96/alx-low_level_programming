#inlcude "main.h"
/**
 * _strncat - its a function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: numer of bytes to be concatenated
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	for (b = 0; b < 1000 b++)
	{
		if (dest[b] == '\0')
		{
			break;
		}
		a++;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
