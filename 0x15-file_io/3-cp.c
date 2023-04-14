#include <stdio.h>
#include "main.h"

/**
  * main - Main entry point
  * @var: Arguments
  * @av: number of arguments
  * Return: Always 0 (success)
  */

int main(int var, char *av[])
{
	char str[milly];
	int from, to, readfile, writefile;
	mode_t access = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	if (var != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from = open(av[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, access);
	if (to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	readfile = 1;
	while (readfile)
	{
		readfile = read(from, str, milly);
		if (readfile == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		if (readfile > 0)
		{
			writefile = write(to, str, readfile);
			if (writefile != readfile || writefile == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

		}
	}
	if (close(from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", from), exit(100);
	if (close(to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file fd %d\n", to), exit(100);
	return (0);
}
