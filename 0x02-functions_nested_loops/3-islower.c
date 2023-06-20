#include "main.h"

/**
 * _islower - entry point
 * @c: inputs c
 * Return: returns 0
 */

int _islower(int c)
{
	int i;

	int isLower;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			isLower = 1;
		}
	}
	if (isLower == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
