#include "main.h"

/**
  * append_text_to_file - A function that appends text at the end of a file.
  * @filename: The file's name.
  * @text_content: The NULL terminated string to add at the end of the file.
  * Return: 1 on success and -1 on failure.
  */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *str;
	int append;

	if (filename == NULL)
	{
		return (-1);
	}
	if (!text_content || strlen(text_content) == 0)
	{
		append = open(filename, O_RDWR);
		if (append == -1)
		{
			close(append);
			return (-1);
		}
		close(append);
		return (1);
	}
	str = fopen(filename, "a");
	if (!str)
		return (-1);
	append = fputs(text_content, str);
	if (append == -1)
		return (-1);
	fclose(str);
	return (1);
}
