#include "main.h"

/**
 * print _alphabet - lowercase alphabet x10
 */

void print_alphabet_x10(void)
{
	char alphabet;

	int n;

	n = 0;

	while (n < 10)
	{
		alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		n++;
	}
}
