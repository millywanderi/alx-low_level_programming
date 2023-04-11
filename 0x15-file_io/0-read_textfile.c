#include "main.h"

/**
  * read_textfile - A function that reads a text file
  * and prints it to the POSIX standard output.
  * @filename: A pointer to the filename
  * @letters: The number of letters to read and print.
  * Return: The actual number of letters it could read and print
  * otherwise 0 if the file can not be opened or read
  * or filename is NULL, or write fails or does not write
  * the expected amount of bytes
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char str[milly];
	int characters = 0;
	int file;
	int writevar = 1;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	while (writevar != 0 && letters > milly)
	{
		writevar = read(file, str, milly);
		write(STDOUT_FILENO, str, writevar);
		characters = characters + writevar;
		letters -= milly;
	}
	writevar = read(file, str, letters);
	write(STDOUT_FILENO, str, writevar);
	characters = characters + writevar;
	close(file);

	if (!filename)
		return (0);
	return (characters);
}
