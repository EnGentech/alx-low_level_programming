#include "main.h"

/**
 * cap_string - return all first letter of the word to capital letters
 *
 * @x: return the values in capital
 * Return: return the value to the function
 */

char *cap_string(char *x)
{
	int count;

	count = 0;
	while (x[count] != '\0')
	{
		if (x[0] >= 97 && x[0] <= 122)
		{
			x[0] = x[0] - 32;
		}
		if (x[count] == ' ' || x[count] == '\t' || x[count] == '\n'
		    || x[count] == ',' || x[count] == ';' || x[count] == '.'
		    || x[count] == '.' || x[count] == '!' || x[count] == '?'
		    || x[count] == '"' || x[count] == '(' || x[count] == ')'
		    || x[count] == '{' || x[count] == '}')
		{
			if (x[count + 1] >= 97 && x[count + 1] <= 122)
			{
				x[count + 1] = x[count + 1] - 32;
			}
		}
		count++;
	}
	return (x);
}
