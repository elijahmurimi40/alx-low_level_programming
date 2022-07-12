#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}

	len = i - 1;
	while (len >= 0)
	{
		_putchar(s[i]);
		len -= 1;
	}
	
	_putchar('\n');
}
