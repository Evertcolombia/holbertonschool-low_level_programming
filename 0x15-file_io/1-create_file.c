#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "holberton.h"

int _strlen(char *s);

/**
 * create_file - create a new file
 * @filename: pointer to a file
 * @text_content: string
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND | O_TRUNC | 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (write(fd, text_content, len) != len)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
 * _strlen - show the lenght of a string
 * @s: pointer to  pass the array
 *
 * Return: none
 */

int _strlen(char *s)

{
	int a = 0;

	while (s[a])
		++a;

	return (a);
}
