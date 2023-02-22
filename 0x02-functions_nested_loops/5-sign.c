i#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: the number of the sign to be printed
* Return: 1 for positive num, -1 for negative num or 0 for anything else
*/
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('50');
	return (1);
	}
	else if (n == 0)
	{
		_putchar('98');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('-1');
	}
}
