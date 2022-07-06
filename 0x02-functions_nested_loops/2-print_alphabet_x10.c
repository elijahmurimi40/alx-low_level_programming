#include "main.h"

/**
  * print_alphabet_x10 - prints 10 times, in lowercase
  * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i += 1)
	{
		for (j = 'a'; j <= 'z'; j += 1)
		{
			_putchar(j);
		}

		_putchar('\n')
	}
}
