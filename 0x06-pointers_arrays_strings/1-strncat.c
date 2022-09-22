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
	int length, k;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (k = 0; k < n && src[k] != '\0'; k++, length++)
	{
		dest[length] = src[k];
	}
	dest[length] = '\0';
	return (dest);
}
