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
void mannage_magic(Elf64_Ehdr *header);
void mannage_class_data(Elf64_Ehdr *header);
void mannage_version(Elf64_Ehdr *header);
void mannage_os_abi(Elf64_Ehdr *header);

int main(int argc, char *argv[])
{
	int fd, numRead;
	Elf64_Ehdr *efl_h;

	if (argc != 2)
		mannage_error("Usage: elf-header <ELF-file>\n", 97);

	fd = open(argv[1], O_RDONLY | O_SYNC);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Cant Open File %s\n", argv[1]), exit(98);

	efl_h = malloc(sizeof(Elf64_Ehdr));
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
	mannage_magic(efl_h);
	mannage_class_data(efl_h);
	mannage_version(efl_h);
	mannage_os_abi(efl_h);
	return (1);
}

void isElfFile(unsigned char *e_ident)
{
	if (!strncmp((char *) e_ident, "\177ELF", 4))
		dprintf(STDOUT_FILENO, "ELF Header:\n");
	else
		mannage_error("Error: ELF mismatch \n", 98);
}

void mannage_magic(Elf64_Ehdr *header)
{
	int i = 0;

	dprintf(STDOUT_FILENO, "  Magic:   ");
	for (; i < (EI_NIDENT - 1); i++)
		dprintf(STDOUT_FILENO, "%02x ", header->e_ident[i]);
	dprintf(STDOUT_FILENO, "%02x\n", header->e_ident[i]);
}

void mannage_class_data(Elf64_Ehdr *header)
{

	/* Class */
	dprintf(STDOUT_FILENO, "  Class:   ");
	switch(header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			dprintf(STDOUT_FILENO, "ELF32\n");
			break;
		case ELFCLASS64:
			dprintf(STDOUT_FILENO, "ELF64\n");
			break;
		default:
			dprintf(STDOUT_FILENO, "Invalid Class\n");
			break;
	}

	/* Data */
	dprintf(STDOUT_FILENO, "  Data:   ");
	switch(header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			dprintf(STDOUT_FILENO, "2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			dprintf(STDOUT_FILENO, "2's complement, big endian\n");
		default:
			dprintf(STDOUT_FILENO, "Invalid format %x\n", header->e_ident[EI_DATA]);

	}
}

void mannage_version(Elf64_Ehdr *header)
{
	dprintf(STDOUT_FILENO, "  Version:   ");
	switch (header->e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			dprintf(STDOUT_FILENO, "%i (current)\n", header->e_ident[EI_VERSION]);
			break;
		case EV_NONE:
			dprintf(STDOUT_FILENO, "%i (invalid\n", header->e_ident[EI_VERSION]);
			break;
		default:
			dprintf(STDOUT_FILENO, "Unwknow\n");
			break;
	}
}

void mannage_os_abi(Elf64_Ehdr *header)
{
	dprintf(STDOUT_FILENO, "  OS/ABI:   ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_HPUX:
			dprintf(STDOUT_FILENO, "Hewlett-Packard HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			dprintf(STDOUT_FILENO, "NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			dprintf(STDOUT_FILENO, "Sun Solaris\n");
			break;
		case ELFOSABI_AIX:
			dprintf(STDOUT_FILENO, "AIX\n");
			break;
		case ELFOSABI_IRIX:
			dprintf(STDOUT_FILENO, "IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			dprintf(STDOUT_FILENO, "FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			dprintf(STDOUT_FILENO, "Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_MODESTO:
			dprintf(STDOUT_FILENO, "Novell Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			dprintf(STDOUT_FILENO, "Open BSD\n");
			break;
		case ELFOSABI_SYSV:
			dprintf(STDOUT_FILENO, "UNIX - System V\n");
			break;
		default:
			dprintf(STDOUT_FILENO, "Unknown (0x%x)\n", header->e_ident[EI_OSABI]);
			break;
	}
}

void mannage_error(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}
