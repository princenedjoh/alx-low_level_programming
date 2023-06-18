#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q')
		{
			if (l != 'e')
			{
				putchar(l);
			}
		}
	}
	putchar('\n');
	return (0);
}
