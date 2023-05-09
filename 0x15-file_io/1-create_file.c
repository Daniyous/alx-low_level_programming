#include "main.h"

/**
 * create_file - Create a function that creates a file.
 *		create a file and write in it
 * @filename:file to be created
 *
 * @text_content: content of the file created
 *
 * Return: 1 or if it is wrong -1;
 */
int create_file(const char *filename, char *text_content)
{
	int fed, length, w;

	if (filename == NULL)
		return (-1);

	fed = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fed == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		;
		w = write(fed, text_content, length);
	}
	if (w == -1)
	{
		return (-1);
	}
	close(fed);
	return (1);
}
