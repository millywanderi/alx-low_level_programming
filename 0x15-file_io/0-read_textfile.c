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
	char *str;
	ssize_t openVar;
	ssize_t readVar;
	ssize_t writeVar;

	if (letters == 0)
		return (0);
	if (filename == NULL)
		return (0);

	openVar = open(filename, O_RDONLY);
	if (openVar == -1)
		return (0);

	str = malloc(letters);
	readVar = read(openVar, str, letters);
	if (readVar == -1)
	{
		free(str);
		close(openVar);
		return (0);
	}
	writeVar = write(STDOUT_FILENO, str, readVar);
	if (writeVar == -1)
	{
		free(readVar);
		close(openVar);
		return (0);
	}
	free(str);
	close(openVar);

	return (writeVar);
}
