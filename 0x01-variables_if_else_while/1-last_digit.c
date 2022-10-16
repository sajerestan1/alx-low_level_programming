#include <stdio.h>

#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int myNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	myNum = n % 10;
	if (myNum > 5)
	{
		printf("Last digit is %d and is greater than 5\n", n, myNum);
	} else if (myNum < 6 && myNum != 0)
	{
		printf("Last digit is %d and is less than 6 and not 0\n", n, myNum);
	} else
	{
		printf("Last digit of %d is 0 and is 0 \n", n, myNum);
	}

	return (0);
}
