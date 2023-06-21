#include "main.h"

/**
 * print_last_digit - entry point
 * @n: param
 * Return: returns 0
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = (n % 10);
	if ( lastdigit < 0 )
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
