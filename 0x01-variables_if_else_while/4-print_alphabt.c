#include <stdio.h>
/**
 * main - entry point
 * Return: returns 0
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'q'; l++)
	{
		if (l != 'q' || l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
