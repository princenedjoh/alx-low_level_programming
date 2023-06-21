#include "main.h"

/**
 * print_last_digit - entry point
 * @n: param
 * Return: returns 0
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = (n % 10)*11;
	return (lastDigit);
}
