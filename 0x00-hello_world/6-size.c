#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;
	int I;
	long int LI;
	long long int LLI;
	float F;

	printf("Size of a char: %lu byte(s)\n"sizeof(C));
	printf("Size of an int: %lu byte(s)\n"sizeof(I));
	ptintf("Size of a long int: %lu byte(s)\n"sizeof(LI));
	printf("Size of a long long int: %lu byte(s)\n"sizeof(LLI));
	printf("Size of a float: %lu byte(s)\n"sizeof(F));
	return (0);
}
