#include "main.h"

/**
  * create_file - A function that creates a file
  * @filename: The name of the file to be created
  * @text_content: The NULL terminated string to write to the file
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
	int len, openFile, writeFile;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		openFile = open(filename, O_CREAT, 0600);

		if (openFile == -1)
			return (-1);
		close(openFile);
		return (1);
	}
	len = strlen(text_content);

	openFile = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);

	if (openFile == -1)
		return (-1);
	writeFile = write(openFile, text_content, len);
	if (writeFile == -1)
		return (-1);

	close(openFile);
	return (1);
}
