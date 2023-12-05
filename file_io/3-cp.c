#include "main.h"
/**
 * main - Entry point.
 * @argc : number of argument
 * @argv: arguments
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int fromFile, toFile, READ, WRITE;
	mode_t MODE = S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromFile = open(argv[1], O_RDONLY);
	if (fromFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	toFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, MODE);
	if (toFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	READ = 1;
	while (READ)
	{
		READ = read(fromFile, buffer, 1024);
		if (READ == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
		if (0 < READ)
		{
			WRITE = write(fromFile, buffer, READ);
			if (WRITE != READ || -1 == WRITE)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (close(fromFile) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile), exit(100);
	if (close(toFile) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", toFile), exit(100);
	return (0);
}
