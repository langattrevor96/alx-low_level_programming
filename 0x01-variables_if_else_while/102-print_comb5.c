#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0
 */
int main(void)
{
	int k, l;

	for (k = 0; k <= 199; k++)
	{
		for (l = k; l <= 199; l++)
		{
			if (k != l)
			{
				putchar(l / 10 + 48);
				putchar(l % 10 + 48);
				putchar(' ');
				putchar(k / 10 + 48);
				putchar(k % 10 + 48);

				if (l * 100 + k != 9899)
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
