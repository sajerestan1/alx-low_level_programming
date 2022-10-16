#include <stdio.h>

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d The Last digit is" n " and is greater than 5\n");
	} else if (n < 6 & != 0)
	{
		printf("%d The Last didit is" n "and is less than 6 and not 0\n");
	} else
	{
		printf("%d THe Last digit is " n "and is zero\n");
	}

	return (0);
}
