#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_file - create file
 * @fn: file name
 *
 * Return: file descriptor
 */
int read_file(char *fn)
{
	int fRead;

	fRead = open(fn, O_RDONLY);
	if (fRead == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fn), exit(98);
	return (fRead);
}

/**
 * create_file - create a file with a fd
 * @fn: char filename
 *
 * Return: int fd
 */
int create_file(char *fn)
{
	int fd, openFlags;
	mode_t filePerms;

	openFlags = O_WRONLY | O_CREAT | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	fd = open(fn, openFlags, filePerms);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fn), exit(99);

	return (fd);
}

/**
 * cp_text_file - cp content from a file to other
 * @from: file to copy
 * @to: file to create o trunc
 *
 * Return: int
 */
int cp_text_file(char *from, char *to)
{
	int fr, fw;
	ssize_t numRead;
	char buff[1024];

	fr = read_file(from);
	fw = create_file(to);

	while ((numRead = read(fr, buff, 1024)) > 0)
	{
		if (write(fw, buff, numRead) < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to), exit(99);
	}

	if (numRead == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from), exit(98);

	if (close(fr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr), exit(100);

	if (close(fw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw), exit(100);
	return (1);
}

/**
 * main - main program
 * @ac: int
 * @av: int
 *
 * Return: int
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	res = cp_text_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
