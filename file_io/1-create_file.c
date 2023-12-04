#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename : the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0, file;

	length = strlen(text_content);
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "\0";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	write(file, text_content, length);

	return (1);
}
