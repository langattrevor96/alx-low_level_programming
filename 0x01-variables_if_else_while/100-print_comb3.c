#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int k, t;

	for  (k = 48; k < 58; k++)
	{
		for (t = k; t < 58; t++)
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
