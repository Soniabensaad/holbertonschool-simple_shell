#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(int __attribute__ ((unused)) argc, __attribute__ ((unused)) char **argv)
{
	char *prompt = "$ ";
	char *lineptr;
	size_t n = 0;
	ssize_t nchars_read;

	while(1)
	{
	printf("%s", prompt);
	nchars_read = getline(&lineptr, &n, stdin);
	if(nchars_read == 0)
	return(0);
	printf("%s\n", lineptr);
	
	free(lineptr);
	}
	return (0);
}
