#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void error_mannage(char *msg, int code, char *argument)
{
	dprintf(STDERR_FILENO, msg, argument);
	exit(code);
	return;
}

int read_file(char *file_name)
{
	int fRead;

	fRead = open(file_name, O_RDONLY);
	if (fRead == -1)
		error_mannage("Error: Can't read from file %s\n", 98, file_name);
	return fRead;
}

int create_file(char *file_name)
{
	int fd, openFlags;
	mode_t filePerms;

	openFlags = O_WRONLY | O_CREAT | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd = open(file_name, openFlags, filePerms);
	if (fd == -1)
		error_mannage("Error: Can't write to %s\n", 99, file_name);

	return fd;
}

int cp_text_file(char *file_from, char *file_to)
{
	int fr, fw;
	ssize_t numRead;
	char buff[1024];

	fr = read_file(file_from);
	fw = create_file(file_to);

	while ((numRead = read(fr, buff, 1024)) > 0)
	{
		if (write(fw, buff, numRead) != numRead)
			error_mannage("Error: Can't write to %s\n", 99, file_to);
	}

	if (numRead == -1)
		error_mannage("Error: Can't read from file %s\n",98, file_from);

	if (close(fr) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fr), exit(100);

	if (close(fw) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fw), exit(100);
	return (1);
}

int main (int ac, char **av)
{
	int res;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	res = cp_text_file(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
