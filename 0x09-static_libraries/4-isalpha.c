#include "main.h"

/**
 * _isalpha - entry point
 * @c: _is alpha
 * Return: always 1 (Success)
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
