/**
 * swap_int - entry point
 * @a: parameter
 * @b: parameter
 * swap: integer
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
