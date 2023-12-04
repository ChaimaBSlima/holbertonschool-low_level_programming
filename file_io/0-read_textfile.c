#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename : the name of the file
 * @letters: letters to print
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	bytes = read(file, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(file);
	return (bytes);
}
