/**
 * _pow_recursion - pow recursion
 * @x: value 1
 * @y: expo
 * Return: value1 expo
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y != 0)
		return (x * _pow_recursion(x, --y));
	else
		return (1);
}
