#include "main.h"

/**
 *_strcmp - compare the string difference in the two strings
 * @s1: compare the content to s2
 * @s2: compare the content to s1
 *Return: return flag value to function
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = s1[i] - s2[i];
		}
		else
		{
			continue;
		}
		return (flag);
	}
	return (0);
}
