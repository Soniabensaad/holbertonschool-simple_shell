#include "main.h"

/**
* execute - a function that execute a command
* @argv: pointer array
*
*
*/
void execute(char **argv)
{
	char *cmnd = NULL, *new_cmnd = NULL;

	if (argv == 0)
	{
		cmnd = argv[0];

		new_cmnd = get_location(cmnd);

		if (execve(new_cmnd, argv, NULL) == -1)
		{
			perror("Error:");
		}
	}
}
