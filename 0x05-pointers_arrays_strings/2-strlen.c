/**
 * _strlen - show the lenght of a string
 * @s: pointe to  pass the array
 *
 * Return: none
 */

int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}
