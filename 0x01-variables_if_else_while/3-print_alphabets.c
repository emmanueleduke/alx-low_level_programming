#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;
	char sh;

	ch = 'a';
	sh = 'A';


	while (ch <= 'z')

	{
	putchar(ch);
	ch++;
	}
	while (sh <= 'Z')

	{
	putchar(sh);
	sh++;
	}
	putchar('\n');
	return (0);
}
