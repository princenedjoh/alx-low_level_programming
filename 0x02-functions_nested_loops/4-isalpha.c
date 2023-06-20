#include "main.h"

/**
 * _isalpha - entry point
 * @c: inputs c
 * Return: returns 0
 */

int _isalpha(int c)
{
	int i;

	int j;;

	int isAlpha;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				isAlpha = 1;
			}
		}
	}
	if (isAlpha == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
