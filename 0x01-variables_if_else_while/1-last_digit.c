#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
if ((n % 10) > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
        printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else if ((n % 2) == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, n % 2);
}
	return (0);
}
