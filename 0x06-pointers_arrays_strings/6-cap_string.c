/**
 * cap_string - capitalice all words in a string
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i] == 44) || (str[i] == 59) ||
		(str[i] == 32) || (str[i] == 33) ||
		(str[i] == 63) || (str[i] == 34) ||
		(str[i] == 40) || (str[i] == 41) ||
		(str[i] == 123) || (str[i] == 125) ||
		(str[i] == 46) || (str[i] == 10))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
				str[i + 1] = (str[i + 1] - 32);
		}

		else if (str[i] == 9)
			str[i] = (str[i] + 23);
		i++;
	} return (str);
}
