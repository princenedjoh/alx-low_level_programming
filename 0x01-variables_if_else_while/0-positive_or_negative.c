#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("$n is negative")
	else if (n == 0)
		printf("$n is zero")
	else
		printf("$n is positive")
	return (0);
}
