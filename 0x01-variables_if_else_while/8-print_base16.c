#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	char chh = 'a';
	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (chh = 'a'; chh <= 'f'; chh++)
	{
		putchar(chh);
	}
	putchar('\n');
	return (0);
}
