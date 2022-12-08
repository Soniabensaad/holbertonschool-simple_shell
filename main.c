#include "main.h"
int main(int __attribute__((unused)) argc, char **argv)
{
	char *prompt = "$ ";
	char *lineptr, *lineptr_copy = NULL;
	size_t n = 0;
	ssize_t cmd;
	char *token;
	const char *delim = " \n";
	int i, num_token = 0;
	
	while (1)
	{
		printf("%s", prompt);
		cmd = getline(&lineptr, &n, stdin);
		if (cmd == -1)
			return (-1);
		lineptr_copy = malloc(sizeof(char) * cmd);
		if (lineptr_copy == NULL)
		{
			perror("Memory allocation failed");
			return (-1);
		}
		strcpy(lineptr_copy, lineptr);
		token = strtok(lineptr, delim);
		while (token != NULL)
		{
			num_token++;
			token = strtok(NULL, delim);
		}
		num_token++;
		argv = malloc(sizeof(char *) * num_token);
		token = strtok(lineptr_copy, delim);

		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * strlen(token));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
		argv[i] = NULL;
		execute(argv);
	}
	free(lineptr_copy);
	free(lineptr);

	return (0);
}
