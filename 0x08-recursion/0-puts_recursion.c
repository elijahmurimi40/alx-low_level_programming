#include "main.h"

void _puts_recursion_helper(char *s, int n)
{
	if (s[n] != '\0')
	{
		_putchar(s[n]);
		_puts_recursion_helper(s, n += 1)
	}

	_putchar('\n');
}

void _puts_recursion(char *s)
{
	_puts_recursion_helper(s, 0);
}
