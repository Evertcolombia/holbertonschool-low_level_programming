/**
 * _atoi - entry point
 * @s: pointer to the argument string
 *
 * Return: Integer
 */
int _atoi(char *s)
{
	unsigned int res = 0, flag = 0;

	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			res = res * 10 + *s - '0';
			if (*(s + 1)  < 48 || *(s + 1) > 57)
				break;
		}
		else if (*s == '-' && *(s + 1) > 47 && *(s + 1) < 58)
			flag = 1;
		s++;
	}
	if (flag > 0)
		res *= -1;
	return (res);
}
