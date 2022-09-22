#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: this is the pointer to the first string
 *@s2: this is the pointer to the second string
 *
 * Return: less than 0
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
