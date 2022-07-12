#include "main.h"

void print_rev(char *s)
{
	int i = 0;

	while (char[i] != '\0')
	{
		i += 1;
	}

	while (i >= 0)
	{
		_putchar(char[i]);
		i -= 1;
	}

	_putvhar('\n');
}
