#include "main.h"

/**
  * print_last_digit - printsthe last digit of a number
  * @n: the int to extract the last digit from
  * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a = n % 10;
	if (a < 0) 
		a = -a;
	return (a);
}
