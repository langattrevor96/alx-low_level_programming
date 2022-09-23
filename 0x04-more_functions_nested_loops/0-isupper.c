#include "main.h"
/**
 * _isupper - function that verifies whether uppercase or not
 * @c: tested character
 * Return: returns 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	return (1);

	return (0);
}
