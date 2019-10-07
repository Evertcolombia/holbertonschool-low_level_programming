/**
 * *leet - kevin
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char encodes[5][2] = {
		{'a', 'A'}, {'e', 'E'}, {'o', 'O'}, {'t', 'T'}, {'l', 'L'}
	};
	char values [5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j <= 4; j++)
		{
		if ((s[i] == encodes[j][0]) || (s[i] == encodes[j][1]))
			s[i] = values[j];
		}
		++i;
	}

	return (s);
}
