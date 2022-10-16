#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowAlpha, upAlpha;


	for (lowAlpha = 'a'; lowAlpha <= 'z'; lowAlpha++)
	{
		putchar(lowAlpha);
	}

	for (upAlpha = 'A'; upAlpha <= 'Z'; upAlpha++)
	{
		putchar(upAlpha);
	}

	putchar('\n');

	return (0);
}

