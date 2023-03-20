#include "main.h"

/**
 *_isdigit - function that verifies a digit character or not
 *@c: tested character
 * Return: returns 1 if it digit
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
