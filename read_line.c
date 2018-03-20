#include "shell.h"
/**
 * read_line - gets command line from user
 *
 * Return: returns the user input from the command line
 */
char *read_line(void)
{
	int length;
	char *line = NULL;
	size_t n = 0;

	write(STDOUT_FILENO, "$)> ", 4);
	getline(&line, &n, stdin);
	length = _strlen(line);
	line[length - 1] = '\0';
	return (line);
}
