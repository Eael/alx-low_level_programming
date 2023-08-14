#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n
 * then print the last digit of the number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		puts("and is greater than 5");
	}
	else if (n % 10 == 0)
	{
		puts("and is 0");
	}
	else if (n % 10 < 6)
	{
		puts("and is less than 6 and not 0");
	}
	return (0);
}
