#include "holberton.h"

char *_strcat(char *dest, char *src)
{
	int length; 
	int count = 0;
	int a = 0;

	while(dest[a])
		++a;
	length = a;

	while(count <= length && src[count] != '\0')
	{
		dest[length + count] = src[count];
		count++;
		
	}
	/*for(count = 0; count <= length && src[count] != '\0'; count++)
		dest[length + count] = src[count];*/
	dest[length + count] = '\0';

	return (dest);

}
