#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * create_file - create a file
 * @filename: path to the file
 * @text_content: content for the file
 *
 * Return:  1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	mode_t filePerms;

	if (filename == NULL)
		return (-1);

	filePerms = S_IRUSR | S_IWUSR;
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, filePerms);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	text_len = _strlen(text_content);
	if (write(fd, text_content, text_len) != text_len)
		return (-1);

	close(fd);
	return (1);

}

/**
 * _strlen - calculate the len of a string
 * @s: string
 *
 * Return: len of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
