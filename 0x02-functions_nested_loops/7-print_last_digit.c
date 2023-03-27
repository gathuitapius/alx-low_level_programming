#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * Return: Returns the value of the last digit.
 */
int print_last_digit(int)
{
	n %= 10;
	if (n<0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);

}
