#include "main.h"

/**
 * _islower - entry point
 * @c: _islower
 * Return: Always 1 (success)
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
