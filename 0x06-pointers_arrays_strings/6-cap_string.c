/**
 * cap_string - capitalice all words in a string
 * @str: string
 *
 * Return: string
 */
char *cap_string(char *str)
{
	int i = 0;

	if (str[0] >= 97 && str[i] <= 122)
		str[0] = (str[0] - 32);

	while (str[i])
	{
		if ((str[i] == ',') || (str[i] == ';') ||
		(str[i] == '!') || (str[i] == '.') ||
		(str[i] == '?') || (str[i] == '"') ||
		(str[i] == '(') || (str[i] == ')') ||
		(str[i] == '{') || (str[i] == '}') ||
		(str[i] == '\n') || (str[i] == ' '))
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] = (str[i] - 32);
			i--;
		}

		else if (str[i] == '\t')
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
