#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowAlphaRev;

	for (lowAlphaRev = 'z'; lowAlphaRev >= 'a'; lowAlphaRev--)
	{
		putchar(lowAlphaRev);
	}

	putchar('\n');

	return (0);
}
