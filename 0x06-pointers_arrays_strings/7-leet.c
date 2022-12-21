#include "main.h"
/**
 * leet - exchange the values provided with numbers
 * @ch: Return the exchange values
 *Return: exchanged values to the pointer
 */
char *leet(char *ch)
{
	int xcnt, ycnt;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	xcnt = 0;
	while (ch[xcnt] != '\0')

	{
		ycnt = 0;
		while (ycnt < 10)
		{
			if (x[ycnt] == ch[xcnt])
			{
				ch[xcnt] = y[ycnt];
			}
			ycnt++;
		}
		xcnt++;
	}
	return (ch);
}
