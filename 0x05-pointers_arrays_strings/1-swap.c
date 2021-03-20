/**
 * swap_int - swaps the values of two integers
 * @a: int
 * @b: int
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *b, *b = *a, *a = c;
}
