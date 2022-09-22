#include "main.h"
/**
 * cap_string - capitalizes every first letter of a word in a string.
 * separatores of the words are: tabulation, space,
 * new line, ,, ., !, ?,  (, ), {, and }.
 * @s: pointer to string
 * Return: pointer to string
 */

char *cap_string(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[0] >= 90 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')
		{
			if (s[count + 1] >= 90 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}
	return (s);
}
