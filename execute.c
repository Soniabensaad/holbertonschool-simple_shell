#include "main.h"
/**
 * execute - function that executes the shell
 * @argv: cmd input
 * Return : void
 */
void execute(char **argv)
{
	char *command = NULL, *actual_command = NULL;

	if (argv)
	{
		command = argv[0];
		actual_command = get_location(command);
		if (execve(actual_command, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
