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
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = (str[i] - 32);
			i--;
		}

		else if (str[i] == 9)
		{
			str[i] = (str[i] + 23);
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = (str[i] - 32);
			i--;
		}
		i++;
	}
	return (str);
}
