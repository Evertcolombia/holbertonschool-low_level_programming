#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <elf.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void mannage_error(char *msg, int code);
void isElfFile(unsigned char *e_ident);

int main(int argc, char *argv[])
{
	int fd, numRead;
	Elf64_Ehdr *efl_h;

	if (argc != 2)
		mannage_error("Usage: elf-header <ELF-file>\n", 97);

	fd = open(argv[1], O_RDONLY | O_SYNC);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Cant Open File %s\n", argv[1]), exit(98);

	efl_h = malloc(sizeof(Efl_Ehdr));
	if (efl_h == NULL)
		mannage_error("Cant use malloc\n", 100);
	
	numRead = read(fd, efl_h, sizeof(efl_h));
	if (numRead == -1)
	{
		free(efl_h);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(99);
	}
	
	isElfFile(efl_h->e_ident);

}

void isElfFile(unsigned char *e_ident)
{
	if (!strcmp((char *) e_ident, "\177ELF", 4))
		dprintf(STDOUT_FILENO, "ELF Header:\n");
	else
		mannage_error("Error: ELF mismatch \n", 98);
}

void mannage_error(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}
