#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @text_content: The string to add to the end of the file.
 *
 * @filename: A pointer to the name of the file.
 *
 * Return: if it is right 1
 *		else -1;
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int lenght;
	int fed, wi;


	if (filename == NULL)
		return (-1);
	fed = open(filename, O_APPEND | O_WRONLY);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
	{
		length = 0;
		while (text_content[length] != '\0')
			length++;

		wi = write(fed, text_content, length);
		if (wi == -1)
			return (-1);
	}
	close(fed);
	return (1);
}

