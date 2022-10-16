#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x = 'z';

	for (; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
