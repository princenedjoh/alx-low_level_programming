#include "main.h"

/**
 * _abs - entry point
 * @n: parameter
 * Return: returns 0
 */

int _abs(int n)
{
	int value;

	if (n < 0)
	{
		value = n - (n * 2);
		return (value);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}

}
