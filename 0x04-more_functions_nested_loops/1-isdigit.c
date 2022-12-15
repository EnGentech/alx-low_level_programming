#include "main.h"

/**
 * _isdigit: returns 1 for a digit value
 *
 * @c: return 1 for digits only
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
return (1);
else
return (0);
}
