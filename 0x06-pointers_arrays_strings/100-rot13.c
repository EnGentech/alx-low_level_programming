#include "main.h"

/**
 * rot13 - shift all values in 13 places ahead
 *
 * @rot: return the values in 13 place value
 * Return: return the value as coded
 */

char *rot13(char *rot)
{
	int i;

	for (i = 0; rot[i] != '\0'; i++)
	{
		if ((rot[i] >= 65 && rot[i] <= 77) || (rot[i] >= 97 && rot[i] <= 109))
			rot[i] = rot[i] - 13;
		else if ((rot[i] >= 77 && rot[i] <= 90) || (rot[i] > 109 && rot[i] <= 122))
			rot[i] = rot[i] + 13;
	}
	return (0);
}
