/**
 * swap_int - swaps the values of two integers
 * @a: a pointer the intenger we want to set to 42
 * @b: pointer the intenger we want to set to 98
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	
	*a = d;
	*b = c;
}
