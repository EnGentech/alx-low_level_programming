#include <stdio.h>
#include <stdlib.h>
#include  "main.h"

/**
 * argstostr - entry point
 * @ac: count the number of arguments
 * @av: take the values in this pointer
 * Return: return the strings to the standard output
 */

char *argstostr(int ac, char **av)
{
	char *arg;
	int i, j, count = 0, n = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			count++;
	}
	count += ac;
	arg = (char *)malloc((count + 1) * sizeof(char));

	if (arg == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arg[n] = av[i][j];
			n++;
		}
		if (arg[n] == '\0')
		{
			arg[n++] = '\n';
		}
	}
	return (arg);
}
