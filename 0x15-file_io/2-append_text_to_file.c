#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);

/**
 * append_text_to_file - append text in a file
 * @filename: pointer to file
 * @text_content: pointer to string
 *
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, open_flags;


	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	open_flags = O_WRONLY | O_APPEND;
	fd = open(filename, open_flags);
	if (fd == -1)
		return (-1);

	len = _strlen(text_content);
	if (write(fd, text_content, len) != len)
		return (-1);

	if ((close(fd) == -1))
		return (0);
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
