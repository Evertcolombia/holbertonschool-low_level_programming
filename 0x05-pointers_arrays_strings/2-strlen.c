int _strlen(char *s)
/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */

{
	int a = 0;

	while (s[a])
		++a;

	return (a);
}
