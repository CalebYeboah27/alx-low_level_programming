#include <stdio.h>

/**
 * main - prints all possible combinations
 * of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
		for (y = 48; y <= 57; y++)
			for (z = 48; z <= 57; z++)
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar(',');
						putchar(32);
					}
				}
	return (0);
}
