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

	for (i = 0; rot[i] >= 65 && rot[i] <= 90; i++)
	{
		rot[i] = rot[i] + 13;
		rot[i]++;
	}
	return (rot);
}
