#include "main.h"
/**
 * append_text_to_file -a function that appends text
 * at the end of a file.
 * @filename : the name of the file
 * @text_content: the content of the file
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	length = strlen(text_content);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	write(file, text_content, length);

	return (1);
}
