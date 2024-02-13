#include "main.h"

/**
 * append_text_to_file - This appends text to the end of a file.
 * @filename: This is a pointer to the file name.
 * @text_content: This is the string to be appended to the file.
 *
 * Return: If the function fails or if filename is NULL, return -1.
 * If the file does not exist or if the user lacks write permissions,
 * return -1.
 * Otherwise, return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int w, o, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
