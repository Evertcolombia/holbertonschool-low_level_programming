#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * read_textfile - read a file
 * @filename: pointer to a file
 * @letters: letters total
 *
 * Return: counter
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd, _strlen;
	char *buffer;

	/*if pointer to file is empty*/
	if (filename == NULL)
		return (0);

	/*open and read file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*memory space for the buffer to prduce*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*read(file, start, numbert to read)*/
	_strlen = read(fd, buffer, letters);

	/*if the stdout  != to the len of the buffer return 0*/
	if (write(STDOUT_FILENO, buffer, _strlen) != _strlen)
		return (0);

	/*close file descriptor*/
	close(fd);
	/*free memory*/
	free(buffer);
	/*return len*/
	return (_strlen);
}
