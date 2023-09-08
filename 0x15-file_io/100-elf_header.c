#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_and_print_info(unsigned char *e_ident);

/**
 * check_elf_and_print_info - Checks if a file is an ELF file
 * and prints its header information.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 */
void check_elf_and_print_info(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
	if (e_ident[index] != 127 &&
	e_ident[index] != 'E' &&
	e_ident[index] != 'L' &&
	e_ident[index] != 'F')
	{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT; index++)
	{
	printf("%02x", e_ident[index]);

	if (index == EI_NIDENT - 1)
		printf("\n");
	else
		printf(" ");
	}

}

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
	exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
	close(o);
	dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
	exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
	free(header);
	close(o);
	dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
	exit(98);
	}

	check_elf_and_print_info(header->e_ident);

	free(header);
	close(o);
	return (0);
}
}
