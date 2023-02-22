#include "main.h"
/**
* print_last_digit - function that prints the last digit of a number
*@n: the number to be working on
* Return: Value of the last digit
*/
int print_last_digit(int n)
{
	int lg = n % 10;

if (lg < 0)
lg *= -1;
_putchar(lg + '0');
return (0);
}
