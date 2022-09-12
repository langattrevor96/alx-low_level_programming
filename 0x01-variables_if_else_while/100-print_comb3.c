#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for  (i = 48; i < 58; k++)
	{
		for (j = 1; j < 58; t++)
		{
			if (k == t)
			{
				continue;
			}

			putchar(k);
			putchar(t);

			if (k == 56 && t == 57)
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
