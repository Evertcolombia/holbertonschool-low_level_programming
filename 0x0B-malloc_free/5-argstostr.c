#include <stdlib.h>
#include <stdio.h>

char *argstostr(int ac, char **av)
{
	char *ptr;
	int  a = 0, b = 0, c = 0, i;

	if (ac == 0 || av == NULL)
		return(NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][a])
			b++, a++;
		a = 0, i++;
	}

	printf("%d", b);
	ptr = malloc(b * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ac > i; i++)
	{
		while (av[i][a])
		{
			*(ptr + c) = av[i][a];
			a++, c++;
		}
		*(ptr + c) = '\n';
	} 
	c++;
	*(ptr + c) = '\0';
	
	return (ptr);
}
