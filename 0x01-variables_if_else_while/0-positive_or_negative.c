#include <stdlib.h>
#include <time.h>
#include <stdio.

/**
 * main- Prints if n is positive, nehative or zero
 * Return: Always (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n>0)
	{
		printf("%d is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
