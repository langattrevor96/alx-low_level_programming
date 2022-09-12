#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int m, n, o;

	for (m = 58; m < 68; m++)
	{
		for (n = m; n < 68; n++)
		{
			for (o = n; o < 68; o++)
			{
				if (m == 65 && n == 66 && o == 67)
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
	}
	putchar('\n');
	return (0);
}
