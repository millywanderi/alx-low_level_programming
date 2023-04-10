#include <stdio.h>
#include "main.h"

/**
  * file_name - A function that checks if the file can open.
  * @source_file: file in which contents are copied from.
  * @dest_file: file in which source_file contents are copied
  * @argv: number of arguments.
  * Return: Always 0.
  */

void file_name(int source_file, dest_file, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", argv[1]);
		exit(98);
	}
	if (dest_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", argv[2]);
		exit(99);
	}

}

/**
  * main - Main entry point
  * @argc: Arguments
  * @argv: number of arguments
  * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int file_name, file_from, file_to, error;
	char buf[1024];
	ssize_t characters, nwr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_name(file_from, file_to, argv);

	characters = 1024;
	while (characters == 1024)
	{
		characters = read(file_from, buf, 1024);
		if (characters == -1)
			file_name(0, -1, argv);
		nwr = write(file_to, buf, characters);
		if (nwr == -1)
			file_name(0, -1, argv);
	}
	error = close(file_to);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: %d\n", file_from);
		exit(100);
	}
	return (0);
}
