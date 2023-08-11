#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char chh = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (chh = 'A'; chh <= 'Z'; chh++)
{
	putchar(chh);
}
putchar('\n');
return (0);
}
