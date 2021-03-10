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
void mannage_class(Elf64_Ehdr *header);
void mannage_data(Elf64_Ehdr *header);
void mannage_version(Elf64_Ehdr *header);
void mannage_os_abi(Elf64_Ehdr *header);
void mannage_type(Elf64_Ehdr *header);

typedef struct header_types
{
	int type;
	char *msg;
} Hdr_t;

void struct_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title, int flag);
void type_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title);

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
	mannage_class(efl_h);
	mannage_data(efl_h);
	mannage_version(efl_h);
	mannage_os_abi(efl_h);
	mannage_type(efl_h);
	printf("  Entry point address:\t\t    0x%06lx\n", efl_h->e_entry);
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

void mannage_class(Elf64_Ehdr *header)
{
	Hdr_t h_types[] = {
		{ELFCLASS32, "ELF32\n"},
		{ELFCLASS64, "ELF64\n"},
		{ELFCLASSNONE, "Invalid Class\n"}
	};
	struct_iterator(h_types, 3, header, "  Class:\t\t\t    ", EI_CLASS);
}

void mannage_data(Elf64_Ehdr *header)
{
	Hdr_t h_types[] = {
		{ELFDATA2LSB, "2's complement, little endian\n"},
		{ELFDATA2MSB, "2's complement, big endian\n"},
		{ELFDATANONE, "Invalid data encoding\n"}
	};
	struct_iterator(h_types, 3, header, "  Data:\t\t\t\t    ", EI_DATA);
}

void mannage_version(Elf64_Ehdr *header)
{
	Hdr_t h_types[] = {
		{EV_CURRENT, "1 (current)\n"},
		{EV_NONE, "0 (invalid\n"}
	};
	struct_iterator(h_types, 2, header, "  Version:\t\t\t    ", EI_VERSION);
}

void mannage_os_abi(Elf64_Ehdr *header)
{

	Hdr_t h_types[] = {
		{ELFOSABI_HPUX, "Hewlett-Packard HP-UX\n"},
		{ELFOSABI_NETBSD, "NetBSD\n"},
		{ELFOSABI_SOLARIS, "Sun Solaris\n"},
		{ELFOSABI_AIX, "AIX\n"},
		{ELFOSABI_FREEBSD, "FreeBSD\n"},
		{ELFOSABI_TRU64, "Compaq TRU64 UNIX\n"},
		{ELFOSABI_MODESTO, "Novell Modesto\n"},
		{ELFOSABI_OPENBSD, "Open BSD\n"},
		{ELFOSABI_SYSV, "UNIX - System V\n"}
	};
	struct_iterator(h_types, 9, header, "  OS/ABI:\t\t\t    ", EI_OSABI);
	dprintf(STDOUT_FILENO, "  ABI Version:\t\t\t    ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
}

void mannage_type(Elf64_Ehdr *header)
{
	Hdr_t h_types[] = {
		{ET_NONE, "No file type\n"},
		{ET_REL, "Relocatable file\n"},
		{ET_EXEC, "Executable file\n"},
		{ET_DYN, "Shared object file\n"},
		{ET_CORE, "Core file\n"},
		{ET_LOOS, "Operating system-specific\n"},
		{ET_HIOS, "Operating system-specific\n"},
		{ET_LOPROC, "Processor-specific\n"},
		{ET_HIPROC, "Processor-specific\n"},
	};
	type_iterator(h_types, 8, header, "  Type:\t\t\t\t    ");
}

void struct_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title, int flag)
{
	int i = 0;

	while (i < size)
	{
		if (header->e_ident[flag] == h_t[i].type)
		{
			dprintf(STDOUT_FILENO, "%s", title);
			printf("%s", h_t[i].msg);
		}
		i++;
	}
}

void type_iterator(Hdr_t *h_t, int size, Elf64_Ehdr *header, char *title)
{
	int i = 0;

	while (i < size)
	{
		if (header->e_type == h_t[i].type)
		{
			dprintf(STDOUT_FILENO, "%s", title);
			printf("%s", h_t[i].msg);
		}
		i++;
	}
}


void mannage_error(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}
